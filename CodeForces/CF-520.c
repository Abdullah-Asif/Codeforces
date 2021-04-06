#include <stdio.h>
#include <string.h>
char A[130];

int main()
{
   int i, n, flag = 0, len;
   char B[125];

   scanf("%d", &n);
   scanf("%s", B);
   len = strlen(B);
   for (i = 0; i < len; i++) {
     A[B[i]] = 1;
   }

   for (i = 65; i <= 90; i++) {
      if (A[i] == 1 || A[i+32] == 1) continue;
      else {
         flag = 1;
         break;
      }
   }

   if (flag == 0)
      printf("YES\n");
   else
      printf("NO\n");



   return 0;
}
