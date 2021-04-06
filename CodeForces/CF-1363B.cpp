#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"

int main() {
   IOS
   int t;
   cin >> t;
   while (t--) {
      string s;
      cin >> s;
      int r_ones = 0, l_ones = 0, r_zeros = 0, l_zeros = 0;
      for (auto it : s) {
         if (it == '0') r_zeros++;
         else r_ones++;
      }
      int ans = min (r_ones, r_zeros);
      for (int i = 0; i < s.size(); i++) {
         if (s[i] == '0') l_zeros++, r_zeros--;
         else l_ones++, r_ones--;
         ans = min(ans, l_ones + r_zeros); /// 01
         ans = min (ans, r_ones + l_zeros); /// 10
      }
      cout << ans << endl;
   }
   return 0;
}
