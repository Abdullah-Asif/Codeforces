#include <bits/stdc++.h>
using namespace std;

void solve () {
   int n, one = 0, zero = 0;
   cin >> n;
   string s;
   cin >> s;
   for (int i = 0; i < s.size(); i++) {
      if (s[i] == '0') zero++;
      else break;
   }
   for (int i = s.size() - 1; i >= 0; i--) {
      if (s[i] == '1') one++;
      else break;
   }
   if (one + zero == n) cout << s << endl;
   else cout << string (zero + 1, '0') + string (one, '1') << endl;
}

int main() {
   int t;
   cin >> t;
   while (t--) {
      solve();
   }
   return 0;
}
