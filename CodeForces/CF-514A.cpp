#include <bits/stdc++.h>

using namespace std;

int main() {
   int i;
   string str;
   cin >> str;
   if (str[0] == '9') {
      cout << str[0];
      for (i = 1; i < str.size(); i++) {
         if (str[i] > '4')
            cout << '9' - str[i];
          else
            cout << str[i];
      }
      cout << endl;
   }
   else {
      for (i = 0; i < str.size(); i++) {
         if (str[i] > '4')
            cout << '9' - str[i];
         else cout << str[i];
      }
      cout << endl;
   }
   return 0;
}

