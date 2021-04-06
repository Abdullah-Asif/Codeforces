#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k, i;
    cin >> n >> k;
    int ans = 1;
    for (i = 1; i * i <= n; i++) {
      if (n % i) continue;
      if (i <= k) ans = max (ans, i);
      if (n / i <= k) ans = max (ans, n/i);
    }
    cout << n / ans << endl;
  }
  return 0;
}
