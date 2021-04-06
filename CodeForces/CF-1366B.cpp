#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, n, x, m, a, b, l, r;
  cin >> t;
  while (t--) {
    cin >> n >> x >> m;
    l = x, r = x;
    int mx = 0;
    while (m--) {
      cin >> a >> b;
      if (b < l || r < a) continue;
      l = min (a, l);
      r = max (b, r);
    }
    cout << (r-l) + 1 << endl;
  }
  return 0; 
}