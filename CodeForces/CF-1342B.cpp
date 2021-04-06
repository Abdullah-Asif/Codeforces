#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,i;
   cin >> t;
   while (t--) {
      string s;
      cin >> s;
      bool flag = true;
      for (char c : s) {
         if (c != s[0])
            flag = false;
      }
      if (flag) {
         cout << s << endl;
         continue;
      }
      else {
         for (i = 0; i < 2 * s.length(); i++) {
            cout << i % 2;
         }
         cout << endl;
      }
   }
   return 0;
}
