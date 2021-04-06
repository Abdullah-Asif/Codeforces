#include <bits/stdc++.h>

using namespace std;

int main()

{
   int t, n, a, b, c, d, x1, x2, y1, y2;
   cin >> t;
   while (t--) {
      cin >> n >> a >> b >> c >> d;
      x1 = 0, y1 = 0, x2 = 0, y2 = 0;
      x1 = a - b;
      x2 = a + b;
      y1 = c - d;
      y2 = c + d;
      if (x1 * n <= y2 && x2 * n >= y1)
         cout << "Yes\n";
      else cout << "No\n";
   }
   return 0;
}
