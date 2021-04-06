#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   long long l, r;
   cin >> l >> r;
   if (r - l + 1 < 3) {
      cout << -1 << endl;
      return 0;
   }
   if (l % 2 == 0) {
      cout << l << ' ' << l + 1 << ' ' << l + 2 << endl;
      return 0;
   }
   if (r - l + 1 > 3) {
      cout << l + 1 << ' ' << l + 2 << ' ' <<  l + 3 << endl;
      return 0;
   }
   cout << -1 << endl;
}
