#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
   IOS
   int t;
   cin >> t;
   while (t--) {
      int n,i;
      cin >> n;
      int ara[n];
      for (i = 0; i < n; i++) {
         cin >> ara[i];
      }
      int flag = 0;
      for (i = 1; i < n-1; i++) {
         if (ara[i-1] < ara[i] && ara[i] > ara[i+1]) {
            cout << "YES" << endl;
            cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
            flag = 1;
            break;
         }
      }
      if (flag == 0) cout << "NO" << endl;
   }
   return 0;
}
