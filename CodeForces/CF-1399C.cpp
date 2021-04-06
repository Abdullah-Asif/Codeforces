#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i, j;
    cin >> n;
    int mx = 0, ara[n];
    for (auto &it : ara)
      cin >> it;
    sort (ara, ara + n);
    for (i = 0; i <= 100; i++) {
      int cnt = 0, L = 0, R = n - 1;;
      while (L < R) {
        if (ara[L] + ara[R] == i) {
          cnt++;
          L++, R--;
        }
        else if (ara[L] + ara[R] < i)
          L++;
        else R--;
      }
      mx = max (mx, cnt);
    }
    cout << mx << endl;
  }
  return 0;
}

