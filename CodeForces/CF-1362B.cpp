#include <bits/stdc++.h>

using namespace std;

void solve () {
   int n;
   cin >> n;
   vector <int> vc;
   for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      vc.push_back(num);
   }
   sort (vc.begin(), vc.end());
   vector <int> vc1;
   for (int k = 1; k <= 1024; k++) {
      vc1.clear();
      for (int i = 0; i < vc.size(); i++)
         vc1.push_back(k ^ vc[i]);
      sort (vc1.begin(), vc1.end());
      int flag = 1;
      for (int j = 0; j < vc1.size(); j++) {
         if (vc1[j] != vc[j])
            flag = 0;
      }
      if (flag == 1) {
         cout <<  k << endl;
         return;
      }    
   }
   cout << -1 << endl;
   return;
}

int main() {
   int t;
   cin >> t;
   while (t--) {
      solve();
   }
   return 0;
}
