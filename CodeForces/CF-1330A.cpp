#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x, i, num;
    cin >> n >> x;
    int ara[250];
    memset (ara, 0, sizeof(ara));
    for (i = 1; i <= n; i++) {
      cin >> num;
      ara[num] = 1;
    }
    i = 1;
    while (x) {
      if (ara[i] == 0) {
        ara[i] = 1;
        x--;
      }
      i++;
    }
    int ans = 0;
    for (i = 1; ; i++) {
      if (ara[i] == 0) break;
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}

