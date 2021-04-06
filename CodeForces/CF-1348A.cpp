#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t, n, i, half, sum1, sum2;
   cin >> t;
   while (t--) {
      cin >> n;
      sum1 = 0, sum2 = 0;
      int half = n / 2;
      for (i = half; i < n; i++) {
         sum1 = sum1 + pow(2, i);
      }
      for (i = 1; i < half; i++) {
         sum2 = sum2 + pow(2,i);
      }
      sum2 = sum2 + pow(2,n);
      cout << abs(sum2 - sum1) << endl;
   }
   return 0;
}
