#include <bits/stdc++.h>

using namespace std;

void solve() {
   long long  n, res = 0;
   cin >> n;
   while (n % 6 == 0 || n % 3 == 0) {
      if (n % 6 == 0)
         n /= 6;
      else n *= 2;
      res++;
   }
   cout << (n == 1 ? res : -1) << endl;
}

int main() {
   int t;
   cin >> t;
   while (t--) {
      solve();
   }
   return 0;
}
