#include <bits/stdc++.h>
using namespace std;

int main() {
   int t, n, m, k, x, rem,ans;
   cin >> t;
   while (t--) {
      cin >> n >> m >> k;
      x = 0,ans = 0;
      x = n / k;
      if (x >= m)
         cout << m << endl;
      else {
         rem = m - x;
         if (rem % (k-1) == 0)
            ans = rem / (k-1);
         else ans = (rem / (k-1)) + 1;
         cout << x - ans << endl;
      }
   }
   return 0;
}
