#include <bits/stdc++.h>
using namespace std;

int main()
{
   int i, n, count1 = 0, count2 = 0;

   string str, str1, str2;

   cin >> n;

   if (n == 1) {
      cin >> str;
      cout << str << endl;
   }
   else {
      cin >> str;
      str1 = str;
      count1++;
      for (i = 1; i < n; i++) {
         cin >> str;
         if (str == str1)
            count1++;
         else {
            str2 = str;
            count2++;
         }
      }
      if (count1 >= count2)
         cout << str1 << endl;
      else
         cout << str2 << endl;
   }

   return 0;

}
