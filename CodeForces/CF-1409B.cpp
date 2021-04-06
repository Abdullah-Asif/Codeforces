#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

ll solve (ll a, ll b, ll x, ll y, ll n) {
  ll l = min(a - x, n);
  a = a - l;
  n -= l;
  ll p = min (b - y, n);
  b = b - p;
  return a * b;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll a, b, x, y, n, c;
    cin >> a >> b >> x >> y >> n;
    ll res = min(solve(a, b, x, y, n), solve(b, a, y ,x, n));
    cout << res << endl;
  }
  return 0;
}

