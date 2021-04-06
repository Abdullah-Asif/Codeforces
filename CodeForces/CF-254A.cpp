#include <bits/stdc++.h>

using namespace std;
vector < pair <int ,int> > vc;
int t, i, x;
int flag;
int main()
{
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   ios_base::sync_with_stdio(0);

   cin >> t;
   t *= 2;
   for (i = 0; i < t; i++) {
      cin >> x;
      vc.push_back(make_pair(x, i+1));
   }
   sort (vc.begin(), vc.end());
   for (i = 0; i < vc.size(); i++) {
      if (i % 2 == 1 && vc[i].first != vc[i-1].first) flag = 1;
   }
   if (flag) cout << -1 << endl;
   else {
      for (i = 0; i < vc.size(); i += 2) {
         cout << vc[i].second << ' ' << vc[i+1].second << endl;
      }
   }
   return 0;
}
