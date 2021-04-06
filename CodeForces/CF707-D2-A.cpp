#include <bits/stdc++.h>
using namespace std;

int main()
{
   int i, j, n, m, flag = 1;
   cin >> n >> m;
   char A[n][m];

   for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
         cin >> A[i][j];
      }
   }


   for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
         if (A[i][j] == 'C' || A[i][j] == 'M' || A[i][j] == 'Y') {
            flag = 0;
            break;
         }
      }
   }

   if (flag == 0) cout << "#Color\n";
   else cout << "#Black&White\n";

   return 0;
}
