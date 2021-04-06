#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
   IOS
   int t;
   cin >> t;
   while (t--) {
      int n, i, flag;
      cin >> n;
      int ara[n];
      for (i = 0; i < n; i++) {
         cin >> ara[i];
      }
      flag = 1;
      for (i = 0; i < n-1; i++) {
         if (ara[i] > ara[i+1])
            flag = 0;
      }
      if (flag == 1) {
         cout << 0 << endl;
         continue;
      }
      int flag1 = 1;
      vector <int> vc(ara, ara+n);
      sort (vc.begin(), vc.end());
      vector <int> vc1;
      for (i  = 0; i < n; i++) {
         if (ara[i] != vc[i])
            vc1.push_back(0);
         else vc1.push_back(1);
      }
      int first_1 = 0, last_1 = 0, c0 = 0;
      for (i = 0; i < vc1.size(); i++) {
         if (vc1[i] == 1)
            first_1++;
         else break;
      }
      for (i = vc1.size() -1; i >=  0; i--) {
         if (vc1[i] == 1)
            last_1++;
         else break;
      }
      for (i = 0; i < vc1.size(); i++) {
         if (vc1[i] == 0) {
            for (i = i; i < vc1.size(); i++) {
               if (vc1[i] == 0)
                  c0++;
               else break;
            }
            break;
         }
      }
      if ((first_1 + last_1) + c0 == n) cout << 1 << endl;
      else cout << 2 << endl;
   }
   return 0;
}

