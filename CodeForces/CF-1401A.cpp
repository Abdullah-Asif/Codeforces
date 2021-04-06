#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    if(a <= b) cout << b - a << endl;
    else {
      if ((a - b) % 2) cout << 1 << endl;
      else cout << 0 << endl;
    }
  }
  return 0;
}

