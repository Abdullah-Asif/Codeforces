#include <bits/stdc++.h>
using namespace std;

int main()
{
   char a, b, A[301][310];
   int n, i, j, k, flag1 = 1, flag2 = 1, a1 = 0, b1 = 0;
   cin >> n;

   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         cin >> A[i][j];
      }
   }

   a = A[0][0];
   b = A[0][1];

   for (i = 0, j = n-1; i < n; i++, j--) {
      if (A[i][i] == a && A[i][j] == a) continue;
      else {
         flag1 = 0;
         break;
      }
   }
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
//         if (A[i][j] == b || A[i][j] == a)
//            continue;
         if (A[i][j] == b)
            b1++;
         else if (A[i][j] == a)
            a1++;

//            continue;
         else {
            flag2 = 0;
            break;
         }
      }
   }

   if (flag1 == 1 && flag2 == 1 && a != b && a1 == (n*2)-1 && b1 == (n*n)-a1)
      cout << "YES\n";
   else cout << "NO\n";

   return 0;
}
