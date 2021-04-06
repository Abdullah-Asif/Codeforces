#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t, n, i, p, c, a, b;
   cin >> t;
   while (t--) {
      int flag = 1;
      p = 0, c = 0;
      cin >> n;
      for (i = 1; i <= n; i++) {
         cin >> a >> b;
         if (a < p || b < c) flag = 0;
         else if (b - c > a - p) flag = 0;
         p = a, c = b;
      }
      if (flag == 1) cout << "YES\n";
      else cout << "NO\n";
   }


   return 0;
}
