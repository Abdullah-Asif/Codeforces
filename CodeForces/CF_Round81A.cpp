#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t, n, i;

   cin >> t;

   while (t--) {
      cin >> n;
      if (n % 2 == 1) {
         n = n - 3;
         cout << 7;
      }
      for (i = 0; i < n; i+= 2) {
         cout << 1;
      }
      cout << endl;
   }

   return 0;
}
