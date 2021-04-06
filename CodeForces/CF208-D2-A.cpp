#include <bits/stdc++.h>
using namespace std;

int main()
{

   string str;
   int i, flag = 1;

   cin >> str;

   for (i = 0; i < str.size(); i++) {
      if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B') {
         i += 2;
         if (!flag)
            cout << " ";
      }
      else {
         flag = 0;
         cout << str[i];
      }
   }
   return 0;
}
