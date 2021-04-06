#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    if (n <= 2) cout << 1 << endl;
    else {
      n = n - 2;
      n += (x - 1);
      int temp = n / x + 1;
      cout << temp << endl;
    }
  }
  return 0;
}

