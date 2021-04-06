#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

void solve () {
	int n, m, i, j;
	cin >> n >> m;
	ll A[n][m];
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	ll ans = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			int opo_i = n - 1 - i;
			int opo_j = m - 1 - j;
			if (opo_i == i && opo_j == j) continue;
			else if (opo_i == i) ans += abs(A[i][j] - A[i][opo_j]);
			else if (opo_j == j) ans += abs(A[i][j] - A[opo_i][j]);
			else {
				vector<ll> vc = { A[i][j], A[opo_i][j], A[i][opo_j], A[opo_i][opo_j] };
				sort (vc.begin(), vc.end());
				ans += vc[3] - vc[0] + vc[2] - vc[1];
			}
			A[i][j] = A[opo_i][j] =  A[i][opo_j] = A[opo_i][opo_j] = 0;
		}
	}
	cout << ans << endl;

}

int main() {
	// freopen("input.txt","r",stdin);
 //  freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	solve();
  }
  return 0;
  
}
