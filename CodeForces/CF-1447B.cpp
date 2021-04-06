#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n, m;
  	cin >> n >> m;
  	int A[n][m];
  	int cnt = 0, sum = 0;
  	int MN = 105;
  	for (int i = 0; i < n; i++) {
  		for (int j = 0; j < m; j++) {
  			cin >> A[i][j];
  			sum += abs(A[i][j]);
  			MN = min(MN,abs(A[i][j]));
  			if (A[i][j] < 0) cnt++;
  		}
  	} 
  	if (cnt % 2) sum -= (2 * MN);
  	cout << sum << endl;
  }
  return 0;
}
