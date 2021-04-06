#include <bits/stdc++.h>
using namespace std;

int main() {
   int i, s, r0 = -1, r1 = 0, l0 = -1, l1= 0, n;
   string str;
   cin >> n;
   cin >> str;
   for (i = 0; i < n; ++i) {
      if (str[i] == 'R') {
         if (r0 == -1)
            r0 = i + 1;
         r1 = i + 1;
      }
      if (str[i] == 'L') {
         if (l0 == -1)
            l0 = i + 1;
         l1 = i + 1;
      }
   }
   if (r0 > 0 && l0 > 0) cout << r0 << ' ' << r1 << endl;
   else if (r0 > 0) cout << r0 << ' ' << r1+1 << endl;
   else cout << l1 << ' ' << l0-1 <<endl;
   return 0;
}
