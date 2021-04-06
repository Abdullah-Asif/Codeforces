
#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector <int> vc;
   int i, half, n, t, num, res;

   cin >> t;

   while (t--) {
      cin >> n;
      res = 0;
      for (i = 0; i < n*2; i++) {
         cin >> num;
         vc.push_back(num);
      }
      sort(vc.begin(), vc.end());
      half = (n*2) / 2;
      res = vc[half] - vc[half - 1];
//      for (i = 0; i != vc.size(); i++) {
//         cout << vc[i] << ' ';
//      }
      //cout << endl;
      cout << res << endl;
      vc.clear();
   }

   return 0;
}
