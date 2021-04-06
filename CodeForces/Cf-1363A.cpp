#include <bits/stdc++.h>

using namespace std;

int main() {
   int t, n, x;
   cin >> t;
   while (t--) {
       int res, odd = 0, even = 0, i, num;
       cin >> n >> x;
       for (i = 1; i <= n; i++) {
         cin >> num;
         if (num  % 2 == 0) even++;
         else odd++;
       }
       if ((x == n && odd % 2 == 0) || (x % 2 == 0 && even == 0) || odd == 0)
         cout << "NO\n";
         else cout << "YES\n";
   }
   return 0;
}
