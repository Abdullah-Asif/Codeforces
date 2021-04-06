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
  	ll n, p, k;
  	cin >> n >> p >> k;
  	p--;
  	string s;
  	cin >> s;
  	ll x, y;
  	cin >> x >> y;
  	vector<ll> A(n);
  	ll ans = n * x;
  	for (int i = n - 1; i >= p; i--) {
  		A[i] = (s[i] == '1' ? 0 : x);
  		if (i + k < n) A[i] += A[i+k];
  		ans = min(ans, A[i] + y * (i - p));
  	}
  	cout << ans << endl;
  }
 	return 0;
}