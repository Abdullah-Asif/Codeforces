#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, t, i;

   cin >> n >> t;

   if (t == 10 && n == 1) cout << -1 << endl;

   else if (n == 1) cout << t << endl;

   else if (t == 10) {
      cout << 1;
       for (i = 1; i < n; i++) {
         cout << 0;
      }
      cout << endl;

   }

   else {
      cout << t;
      for (i = 1; i < n; i++) {
         cout << 0;
      }
      cout << endl;
   }

   return 0;
}
