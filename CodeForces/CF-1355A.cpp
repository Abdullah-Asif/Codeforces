#include <bits/stdc++.h>
using namespace std;

long long int multi(long long int n) {
   long long int mn = 9, mx = 0, x;
   while (n > 0) {
      x = n % 10;
      mn = min(mn, x);
      mx = max(mx, x);
      n = n / 10;
   }
   return mn * mx;
}
int main() {
   long long int t, n, k;
   cin >> t;
   while (t--) {
      cin >> n >> k;
      k--;
      while (k--) {
         long long int x = multi(n);
         if (x == 0) break;
         n = n + x;
      }
      cout << n << endl;
   }
   return 0;
}
