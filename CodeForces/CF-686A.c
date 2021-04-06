#include <stdio.h>

int main()
{
   int n, x, d, count = 0, i;
   char s;

   scanf("%d %d", &n, &x);

   for (i = 1; i <= n; i++) {
      scanf("%c",&s);
      scanf("%d", &d);

      if(s == '+') {
         x = x + d;
      }
      else if (d <= x) {
          x = x - d;
      }
      else {
           count++;
      }

   }
   printf("%d %d\n", x, count);



   return 0;


}
