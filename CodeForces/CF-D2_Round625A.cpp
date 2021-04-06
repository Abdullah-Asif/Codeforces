#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, i, R[120], B[120], rcount = 0, r = 0, b = 0, x = 1;
   cin >> n;
   for (i = 0; i < n; i++) {
      cin >> R[i];
   }
   for (i = 0; i < n; i++) {
      cin >> B[i];
   }
   for (i = 0; i < n; i++) {
      if (R[i] > B[i]) rcount++;
      if (B[i] == 1) b++;
      if (R[i] == 1) r++;
   }
   if (rcount == 0) cout << -1 << endl;
   else {
      while ((x * rcount + (r-rcount)) <= b) {
         x++;
      }
      cout << x << endl;
   }
   return 0;
}
