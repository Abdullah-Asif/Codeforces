#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

ll lcm (ll a, ll b) {
	return a / __gcd(a, b) * b;
}

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  ll n;
  cin >> n;
  ll ans;
  for(ll i = 1; i * i <= n; i++) {
  	if (n % i == 0 && lcm(i, n/i) == n) {
  		ans = i;
  	} 
  }
  cout << ans << ' ' << n / ans << endl;
 	return 0;
}