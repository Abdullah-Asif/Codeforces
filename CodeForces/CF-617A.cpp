#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t, n, i, odd, even, A[2020];

   cin >> t;

   while (t--) {
      cin >> n;
      int sum = 0;
      odd = 0, even = 0;

      for (i = 0; i < n; i++) {
         cin >> A[i];
         if(A[i] % 2 == 0) even++;
         else odd++;
         sum += A[i];
      }

      if (sum % 2 != 0) cout << "YES\n";
      else if (odd >=1 && even >= 1) cout << "YES\n";
      else cout << "NO\n";
   }

   return 0;
}
