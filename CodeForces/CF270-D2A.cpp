#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int t, x;
   cin >> t;
   while (t--) {
      cin >> x;
      if (360 % (180 - x) == 0) cout << "YES\n";
      else cout << "NO\n";
   }
   return 0;
}
