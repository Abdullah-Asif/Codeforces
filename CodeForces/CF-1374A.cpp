#include <bits/stdc++.h>

using namespace std;

void solve() {
   long long  x, y, n, d;
   cin >> x >> y >> n;
   d = n / x;
   if ((d * x) + y <= n) cout << (d * x) + y << endl;
   else cout << (d - 1) * x + y << endl;

}
int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int t;
   cin >> t;
   while (t--) {
      solve ();
   }
   return 0;
}
