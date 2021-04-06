#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, t, rem, res;

   cin >> t;

   while (t--) {
      cin >> n;
      res = 0;
      while (n >= 10) {
         rem = n % 10;
         res += n-rem;
         n = n/10 + (n % 10);
      }
      cout << res+n << endl;
   }
   return 0;
}
