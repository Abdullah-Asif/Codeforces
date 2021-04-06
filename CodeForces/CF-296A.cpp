#include <bits/stdc++.h>
using namespace std;
int ara[1010];
int main() {
   int mx = 0;
   int n;
   cin >> n;
   for (int i = 1; i <= n; i++) {
      int x;
      cin >> x;
      ara[x]++;
      mx = max (mx, ara[x]);
   }
   if (mx <= (n+1) / 2) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}
