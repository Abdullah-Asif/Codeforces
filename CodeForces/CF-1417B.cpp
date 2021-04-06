#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, t, f = 0;
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      if (num * 2 == t) {
        cout << f << ' ';
        f ^= 1;
      }
      else if(num <= t / 2) cout << 0 << ' ';
      else cout << 1 << ' ';
    }
    cout << endl;
  }

  return 0;
}

