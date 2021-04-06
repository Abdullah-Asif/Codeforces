#include <bits/stdc++.h>
using namespace std;

int main()
{
   unsigned long long int a, b, c, n, sum = 0, big, avg;
   int i, t;

   scanf("%d", &t);

   for (i = 1; i <= t; i++) {
      scanf("%llu %llu %llu %llu", &a, &b, &c, &n);
      sum = a + b + c + n;
      big = max(a,b);
      big = max(big,c);
      avg = sum / 3;

      if (sum % 3 == 0 && avg >= big) printf("YES\n");
      else printf("NO\n");
      sum = 0;
   }

   return 0;
}
