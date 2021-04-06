#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long int t, n, k, x, y;
   cin >> t;
   while (t--) {
      cin >> n >> k;
      x = ((k / n) + k);
      if (n == 2) cout << n * k - 1 << endl;
      //else if (x % n == 0) cout << x + 1 << endl;
      else if (x / n > k / n) {
         x = x / n;
         y = k / n;
         while (x > y) {
            y = x;
            x = x + k;
            x = x / n;
         }
         cout << y + k << endl;
      }
      else cout << x << endl;;
   }
   return 0;
}
