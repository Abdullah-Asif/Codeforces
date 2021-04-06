#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cin >> s;
   if (s.size() % 2 == 0) cout << s.size() / 2 << endl;
   else {
      int x = 0;
      for (int i = 1; i < s.size(); i++) {
         x += s[i] - '0';
      }
      if (x) cout << s.size() / 2 + 1 << endl;
      else cout << s.size()/2 << endl;
   }
   return 0;
}
