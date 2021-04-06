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
    int ara[n];
    int f1 = 0, f2 = 0;
    for (i = 0; i < n; i++) {
      cin >> ara[i];
      if (ara[i] % 2 == 0)
        f1 = 1;
      else f2 = 1;
    }
    cout << ((f1 == 1 && f2 == 1) ? "NO" : "YES") << endl;
  }
  return 0;
}
