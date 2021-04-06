#include <bits/stdc++.h>
using namespace std;

void solve () {
   int n, i;
   cin >> n;
   int ara[n];
   for (i = 0; i < n; i++) {
      cin >> ara[i];
   }
   vector <int> vc;
   for (i = 0; i < n; i++) {
      if (i == 0 || i == n-1)
         vc.push_back(ara[i]);
      else if ((ara[i] > ara[i-1] && ara[i] < ara[i+1]) || (ara[i] < ara[i-1] && ara[i] > ara[i+1]))
         continue;
      else vc.push_back(ara[i]);
   }
   cout << vc.size() << endl;
   for (auto it : vc)
      cout << it << ' ';
   cout << endl;
}
int main() {
   int t;
   cin >> t;
   while (t--) {
      solve();
   }
   return 0;
}
