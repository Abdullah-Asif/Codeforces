#include <bits/stdc++.h>
using namespace std;

int main()
{
   int A[1050], B[1050], n, i, j, flag1 = 1, flag2 = 1;

   cin >> n;

   for (i = 0, j = 0; i < n; i++, j++) {
      cin >> A[i] >> B[i];
   }

   for (i = 0, j = 0; i < n; i++, j++) {
      if (A[i] != B[j]) {
         flag1 = 0;
         break;
      }
   }

   for (j = 0; j < n-1; j++) {
      if (B[j] < B[j + 1]) {
         flag2 = 0;
         break;
      }
   }

   if (flag1 == 0) cout << "rated\n";
   else if (flag1 != 0 && flag2 == 0) cout << "unrated\n";
   else cout << "maybe\n";

   return 0;
}
