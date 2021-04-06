#include <bits/stdc++.h>

using namespace std;

void solve() {
   int n, x, i;
   cin >> n >> x;
   int ara[n];
   int sum = 0, ans = 0, flag = 0;
   for (i = 0; i < n; i++) {
      cin >> ara[i];
      sum += ara[i];
      ans++;
   }
   int sum1 = sum;
   int ans1 = ans;
   if (sum % x != 0) cout << ans << endl;
   else {
      for (i = 0; i < n; i++) {
         sum -= ara[i];
         ans--;
         if (sum % x != 0) {
            flag = 1;
            break;
         }
      }
      for (i = n-1; i >= 0; i--) {
         sum1 -= ara[i];
         ans1--;
         if (sum1 % x != 0) {
            flag = 1;
            break;
         }
      }
      if (flag == 1) cout << max(ans, ans1) << endl;
      else cout << -1 << endl;
   }

}

int main() {
   int t;
   cin >> t;
   while (t--) {
      solve();
   }
   return 0;
}
