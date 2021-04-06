#include <bits/stdc++.h>

using namespace std;

void solve() {
   long long n, k, i, j, x, ans;
   cin >> n >> k;
   long long ara[n+1];
   vector <int> K;
   ans = 0;
   for (i = 1; i <= n; i++) {
      cin >> ara[i];
   }
   sort (ara + 1, ara + n + 1);
   for (i = 1; i <= k; i++) {
      cin >> x;
      if (x == 1) {
         ans += 2 * ara[n];
         n--;
      }
      else K.push_back(x);
   }
   sort (K.begin(), K.end(), greater <int>());
   for (i = n, j = 0; j < K.size(); j++, i--)
      ans += ara[i];
   for (i = 1, j = 0; j < K.size(); i+= (K[j] -1),j++)
      ans += ara[i];
   cout << ans << endl;

}
int main() {
   int t;
   cin >> t;
   while (t--) {
      solve();
   }
   return 0;
}


