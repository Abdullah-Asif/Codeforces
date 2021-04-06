#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t, i, n, sum1, even, sum2;
   cin >> t;
   while (t--) {
      cin >> n;
      if ((n / 2) % 2 == 1) cout << "NO\n";
      else {
         cout << "YES\n";
         n = n / 2;
         sum1 = n * ( n + 1);
         sum2 = 1;
         even = 2;
         for (i = 1; i <= n; i++) {
            cout << even << ' ';
            even += 2;
         }
         for (i = 1; i < n; i++) {
            cout << sum2 << ' ';
            sum2 += 2;
         }
         sum2 = (n-1) * (n - 1);
         cout << sum1 - sum2 << endl;
      }
   }
   return 0;
}
