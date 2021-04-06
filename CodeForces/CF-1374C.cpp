#include <bits/stdc++.h>

using namespace std;

void solve () {
   int n, i, j,ans = 0,res = 0;;
   string s;
   cin >> n;
   cin >> s;
   for (i = 0; i < s.size(); i++) {
      if (s[i] == '(')
         ans++;
      else ans--;
      if (ans < 0) {
         ans = 0;
         res++;}
   }
   cout << res << endl;
}

int main() {
   int t;
   cin >> t;
   while (t--) {
      solve();
   }
   return 0;
}
