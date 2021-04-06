#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ara[n], MIN = 1e9 + 7;
    for (int i = 0; i < n; i++) {
      cin >> ara[i];
      MIN = min (MIN, ara[i]);
    }
    vector <int> vc (ara, ara + n);
    sort (vc.begin(), vc.end());
    int flag = 0;
    for (int i = n - 1; i >= 0; i--) {
      if (ara[i] != vc[i]) {
        if (ara[i] % MIN ||  vc[i] % MIN) {
          flag = 1; break;
        }
      }
    }
    if (flag % 2) cout << "NO" << endl;
    else cout << "YES" << endl;
  }
  return 0;
}

