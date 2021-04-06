#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i;
    cin >> n;
    if (n == 1) cout << -1 << endl;
    else {
      cout << 2;
      for (i = 1; i < n; i++) {
        cout << 9;
      }
      cout << endl;
    }
  }
  return 0;
}

