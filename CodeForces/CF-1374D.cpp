#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   ll i, n, k, x, ans = 0;
   cin >> n >> k;
   map <ll, ll > mp;
   for (i = 0; i < n; i++) {
      int num;
      cin >> num;
      mp[k - (num % k)]++;
   }
   for (auto it : mp) {
      if (it.first == k)
         continue;
      else {
         x = (it.second - 1) * k + it.first + 1;
         ans = max (ans, x);
      }
   }
   cout << ans << endl;
}
int main () {
   int t;
   cin >> t;
   while (t--) {
      solve ();
   }
   return 0;
}
