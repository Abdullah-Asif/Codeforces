#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;
int main() {
  IOS
  ll t;
  cin >> t;
  while (t--) {
    ll l, i, r, m, res, na, b, c;
    cin >> l >> r >> m;
    ll x = m - (r - l);
    ll y = m + (r - l);
    for (i = l; i <= r; i++) {
      na = y - (y % i);
      if (na >= x && na <= y) {
        if (na >= m) {
          res = na - m;
          c = r;
          b = r - res;
          cout << i << ' ' << b << ' ' << c << endl;
          break;
        }
        else {
          res = m - na;
          b = r;
          c = r - res;
          cout << i << ' ' << b << ' ' << c << endl;
          break;
        }
        break;
      }
    }
  }
  return 0;
}

