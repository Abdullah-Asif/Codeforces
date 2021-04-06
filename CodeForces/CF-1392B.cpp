#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i;
    ll k;
    cin >> n >> k;
    int ara[n];
    int mx = -1e9;
    for (i = 0; i < n; i++) {
      cin >> ara[i];
      if (ara[i] >= mx) mx = ara[i];
    }
    if (k % 2) {
      for (i = 0; i < n; i++) {
        ara[i] = mx - ara[i];
      }
      for (auto it : ara)
        cout << it << ' ';
      cout << endl;
    }
    else {
      int mx1 = -1e9;
      for (i = 0; i < n; i++) {
        ara[i] = mx - ara[i];
        if (ara[i] >= mx1) mx1 = ara[i];
      }
      for (i = 0; i < n; i++) {
        ara[i] = mx1 - ara[i];
      }
      for (auto it : ara)
        cout << it << ' ';
      cout << endl;
    }
  }
  return 0;
}

