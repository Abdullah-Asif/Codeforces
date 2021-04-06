#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(0);
   int t, i, n, k, x;
   cin >> t;
   while (t--) {
      set <int> s;
      vector <int> vc;
      int setsize, add;
      cin >> n >> k;
      for (i = 1; i <= n; i++) {
         cin >> x;
         s.insert(x);
      }
      setsize = s.size();
      if (setsize > k) {
         cout << -1 << endl;
         continue;
      }
      add = k - setsize;
      for (i = 1; i <= add; i++) {
         vc.push_back(1);
      }

      cout <<  (setsize + add ) * 100 << endl;
      k = 100;
      while (k--) {
         for(auto p : s)
            cout << p << ' ';
         for (auto v: vc)
            cout << v << ' ';
      }
      cout << endl;
   }
   return 0;
}
