
#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  IOS
  int t;
  cin >> t;
  while (t--) {
    int n, i;
    cin >> n;
    int ara[n], odd = 0, even = 0, mn = 1e7;
    for (i = 0; i < n; i++) {
      cin >> ara[i];
      if (ara[i] % 2 == 0)
        even++;
      else odd++;
    }
    sort (ara, ara + n);
    for (i = 1; i < n; i++) {
      int x = ara[i] - ara[i-1];
      if (x == 0) continue;
      mn = min (mn, ara[i] - ara[i-1]);
    }
    if ((odd % 2 == 1 && even % 2 == 1) && (mn != 1))
      cout << "NO" << endl;
    else cout << "YES" << endl;
  }
  return 0;
}
