#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i, x;
    cin >> n;
    x = (n + 3) / 4;
    for (i = 1; i <= n - x; i++)
      cout << 9;
    for (i = 1; i <= x; i++)
      cout << 8;
    cout << endl;
  }
  return 0;
}

