#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  ll A[n];
  for (ll &it : A) cin >> it;
  sort(A , A + n);
  ll ans = 0;
	for (int i = 0; i < n; i++) {
		ans += (i + 2) * A[i];
	}
	ans -= A[n-1];
	cout << ans << endl;
 	return 0;
}