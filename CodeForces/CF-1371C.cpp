#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

void solve() {
   ll a, b, n, m;
   cin >> a >> b >> n >> m;
   cout << ((m + n <= a + b && m <= min(a,b)) ? "Yes" : "No") << endl;
}

int main() {
   int t;
   cin >> t;
   while (t--) {
      solve();
   }
   return 0;
}
