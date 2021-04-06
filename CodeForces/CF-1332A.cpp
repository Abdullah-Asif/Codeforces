#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll a, b, c, d, u, v;
    cin >> a >> b >> c >> d;
    ll x, y, x1, y1, x2, y2;
    cin >> x >>  y >> x1 >>  y1 >> x2 >> y2;
    x += - a + b;
    y += - c + d;
    if (x >= x1 && x <= x2 && y >= y1 && y <= y2 && (x1 < x2 || a + b == 0) && (y1 < y2 || c + d == 0))
      cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}

