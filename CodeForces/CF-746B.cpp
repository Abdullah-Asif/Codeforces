#include <bits/stdc++.h>

using namespace std;

int main() {
   int n;
   string str, s ="";
   cin >> n;
   cin >> str;
   for (int i = 0; i < str.length(); i++) {
      if (n % 2 == 1) {
         s = s + str[i];
      }
      else s = str[i] + s;
      n--;
   }
   cout << s << endl;
   return 0;
}
