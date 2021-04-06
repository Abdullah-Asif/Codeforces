#include <bits/stdc++.h>

using namespace std;

int main() {
   int n, m, a, b, i, ans = 0;
   pair <int, int> p[50];
   cin >>  n  >> m;
   for (i = 0; i < m; i++) {
      cin >> p[i].second >> p[i].first;
   }
   sort (p, p + m);
   reverse(p, p + m);
   for (i = 0; i < m; i++) {
      int x  = min(n , p[i].second);
      ans += x * p[i].first;
      n -= x;
      if (n <= 0) break;
   }
   cout << ans << endl;
   return 0;
}
