#include <bits/stdc++.h>

using namespace std;

int main() {
   int n, k, i, l, r,val = 0;
   cin >> n >> k;
   for (int i = 1; i <= n; i++) {
      cin >> l >> r;
      val +=  r - l + 1;
   }
   if (val % k == 0) cout << 0 << endl;
   else cout << k - (val % k) << endl;
   return 0;
}
