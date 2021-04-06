#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cin >> s;
   int cnt = 0;
   while (s.length() > 1) {
      int sum = 0;
      for (int i = 0; i < s.length(); i++) {
         sum += s[i] - '0';
      }
      cnt++;
      s = to_string(sum);
   }
   cout << cnt << endl;
   return 0;
}
