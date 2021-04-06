#include <bits/stdc++.h>

using namespace std;

int main()
{

   int t, n, i, num;
   cin >> t;
   while (t--) {
      int mx = 0, ans = 0;
      cin >> n;
      map < int, int > mp;
      for (i = 1; i <= n; i++) {
         cin >> num;
         mp[num]++;
         mx = max(mx, mp[num]);
      }
      if (n == 1) cout << 0 << endl;
      else {
         if (mp.size() <= mx - 1) cout << mp.size() << endl;
         else cout << min(mx ,int (mp.size()- 1)) << endl;
      }

   }
   return 0;
}
