#include <stdio.h>
#include <string.h>

int main()
{
   int i, len, j;
   char  B[105], c, A[]= {"qwertyuiopasdfghjkl;zxcvbnm,./"};

   scanf("%c", &c);
   scanf("%s", B);

   len = strlen(B);

   if (c == 'R') {
      for (i = 0; i < len; i++) {
         for (j = 0; j < 30; j++) {
            if (B[i] == A[j]) {
               printf("%c",A[j - 1]);
               break;
            }
         }
      }
      printf("\n");
   }

   else {
      for (i = 0; i < len; i++) {
         for (j = 0; j < 30; j++) {
            if (B[i] == A[j]) {
               printf("%c",A[j + 1]);
               break;
            }
         }
      }
       printf("\n");
   }

   return 0;
}
