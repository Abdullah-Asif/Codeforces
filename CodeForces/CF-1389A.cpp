#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long x, y;
    cin >> x >> y;
    if (x * 2 <= y)
      cout << x << ' ' <<  x * 2 << endl;
    else cout << -1 << ' ' << - 1 << endl;
  }
  return 0;
}

