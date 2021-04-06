#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int t, a, b, c, d, x;
   cin >> t;
   while (t--) {
      cin >> a >> b >> c >> d;
      if (a <= b) {
         cout << b << endl;
         continue;
      }
      if (c <= d) {
         cout << -1 << endl;
         continue;
      }
      x = (a - b) / (c - d);
      if (x * (c-d) < (a-b)) x = x + 1;
      x = b + x * c;
      cout << x << endl;
   }
   return 0;
}
