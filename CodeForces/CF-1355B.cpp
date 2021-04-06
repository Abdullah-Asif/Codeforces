#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n;
  cin >> t;
  while (t--) {
   cin >> n;
   vector <int> vc(n);
   int cur = 0, ans = 0;
   for (auto &i : vc)
      cin >> i;
   sort (vc.begin(), vc.end());
   for(auto i : vc) {
      ++cur;
      if (i <= cur) {
         ans++;
         cur  = 0;
      }
   }
   cout << ans << "\n";
  }
   return 0;
}
