#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   int t, i, n;
   cin >> t;
   while (t--) {
      cin >> n;
      int x, ara[n+10];
      set <int> s;
      for (i = 0; i < n; i++) {
         cin >> ara[i];
      }
      for (i = 0; i < n; i++) {
         x = ara[i] + ara[ara[i] % n];
         s.insert(x);
      }
      if (s.size() == n) cout << "YES\n";
      else cout << "NO\n";
   }
   return 0;
}
