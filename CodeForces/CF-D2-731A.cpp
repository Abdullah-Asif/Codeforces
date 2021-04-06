#include <bits/stdc++.h>

using namespace std;

int main()
{
   int ara[130], i, j;

   for ( i = 97, j = 1; i <= 122; i++, j++){
      ara[i] = j;
   }
   char s[120];
   scanf("%s", s);
   int len = strlen(s);
   char d,c = s[0];
   int sum, def = min(abs (ara[97] - ara[c]) , 26 - abs(ara[97] - ara[c]));
   for(i = 1; i < len; i++) {
      c = s[i];
      d = s[i-1];
      sum = min(abs (ara[d] - ara[c]) , 26 - abs(ara[d] - ara[c]));
      def = def + sum;
   }
   cout << def << endl;
   return 0;
}
