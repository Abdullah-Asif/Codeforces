#include <bits/stdc++.h>
using namespace std;

int main() {
   int ara[250000], n, i, cnt = 0, mn = 1e9, flag = 0;
   string str;
   cin >> n;
   cin >> str;
   for (i = 0; i < n; i++) {
      cin >> ara[i];
   }
   for (i = 0; i < str.size () - 1; i++) {
      if (str[i] == 'R' && str[i + 1] == 'L') {
         cnt = (ara[i+1] - ara[i] ) / 2;
         mn = min (mn, cnt);
         flag = 1;
      }
   }
   if (flag == 1) cout << mn << endl;
   else cout << -1 << endl;
   return 0;
}
