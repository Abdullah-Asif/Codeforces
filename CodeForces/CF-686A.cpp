#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int n, x, d, count1 = 0, i;
   char s;

   cin >> n >> x;

   for (i = 1; i <= n; i++) {
      cin >> s >> d;

      if(s == '+') {
         x = x + d;
      }
//      else if (d <= x) {
//          x = x - d;
//      }
//      else {
//           count1++;
//      }

      else {
         if (d > x) count1++;
         else x = x - d;
      }

   }
   cout << x << " " << count1;

   return 0;
}
