#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while (t--) {
      map <char, long long> mp;
      string s;
      long long i,ans =LLONG_MAX, mx, mn;
      cin >> s;
      s = 'A' + s;
      for(i = 1; i < s.size(); i++) {
         mp[s[i]] = i;
         if (mp.size() == 3) {
            mx = 0, mn = LLONG_MAX;
            for (auto it : mp) {
               mx = max(mx, it.second);
               mn = min(mn, it.second);
            }
            ans = min (ans, mx - mn + 1);
         }
      }
      if (ans == LLONG_MAX) cout << 0 << "\n";
      else cout << ans << "\n";
   }
   return 0;
}




























//string minWindow(string s, string t) {
//        vector<int> hist(128, 0);
//        for (char c : t) hist[c]++;
//
//        int remaining = t.length();
//        int left = 0, right = 0, minStart = 0, minLen = numeric_limits<int>::max();
//        while (right < s.length()){
//            if (--hist[s[right++]] >= 0) remaining--;
//            while (remaining == 0){
//                if (right - left < minLen){
//                    minLen = right - left;
//                    minStart = left;
//                }
//                if (++hist[s[left++]] > 0) remaining++;
//            }
//        }
//
//        return minLen < numeric_limits<int>::max() ? s.substr(minStart, minLen) : "";
//    }
//
//int main() {
//
//   int t;
//   string in, given = "123";
//   cin >> t;
//   while (t--) {
//      cin >> in;
//      string s = minWindow (in, given);
//      cout << s.size() << endl;
//   }
//   return 0;
//}
