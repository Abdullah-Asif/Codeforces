#include <bits/stdc++.h>
using namespace std;

int main()
{
   string str1, str2;

   getline (cin, str1);
   getline (cin, str2);

   if (str1 == str2) cout << "-1" << endl;
   else {
      if (str1.length() > str2.length())
         cout << str1.length() << endl;

      else cout << str2.length() << endl;
   }


}
