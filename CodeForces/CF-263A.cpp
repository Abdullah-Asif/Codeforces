#include <bits/stdc++.h>
using namespace std;

int main()
{
   int A[10][10], i, j, ans = 0;
   for (i = 1; i <= 5; i++) {
      for (j = 1; j <= 5; j++) {
         cin >> A[i][j];
      }
   }

   for (i = 1; i <= 5; i++) {
      for (j = 1; j <= 5; j++) {
         if (A[i][j] == 1) {
            //cout <<  i  << " " << j << endl;
            ans = abs(3 - i) + abs(3 - j);
            //ans = abs(ans);
            break;
         }
      }

   }

   cout << ans << endl;

   return 0;
}
