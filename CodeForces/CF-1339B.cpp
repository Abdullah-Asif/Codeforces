#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   int t, n, i, j;
   cin >> t;
   while (t--) {
      cin >> n;
      int ara[n+2];
      vector <int> vc;
      for (i = 0; i < n; i++) {
         cin >> ara[i];
      }
      sort (ara, ara+n);
      for (i = 0, j = n-1; i <= j; i++, j--) {
         if ( i == j) vc.push_back(ara[i]);
         else vc.push_back(ara[i]), vc.push_back(ara[j]);
      }
      reverse (vc.begin(), vc.end());
      for (auto p : vc)
         cout << p  <<' ';
      cout << endl;
   }
   return 0;
}
