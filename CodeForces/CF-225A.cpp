#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n, x, a, b, val, flag = 0;
   cin >> n;
   cin >> x;
   val = 7 - x;
   while (n--) {
      cin >> a >> b;
      if ((a == val || b == val) || (a == x || b == x)) {
         flag = 1;
      }
   }
   if (flag == 1) cout << "NO\n";
   else cout << "YES\n";
   return 0;
}
