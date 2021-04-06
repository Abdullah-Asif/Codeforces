#include <bits/stdc++.h>
using namespace std;

int main()
{
   string str;
   int i, cnt,t, j;
   cin >> t;
   while (t--) {

      cnt = 0;
      cin >> str;

      for (i = 0; i < str.length(); i++) {
         if (str[i] == '1') break;
         else if (str[i] == '0' && str[i+1] == '1' && str[i+2] == '1' ) break;
         else {
            for (j = i+2; j < str.length(); j++) {
               if (str[j] == '0')
                  cnt++;
               else if (str[j] == '1')
                  break;
               }
               break;
            }
      }
      printf("%d\n",cnt);
   }

   return 0;
}
