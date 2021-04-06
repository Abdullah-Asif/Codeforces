#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n, i, x , y;
    cin >> n;
    x = 1e9 + 5, y = 1e9 + 5;
    ll v1, v2, cnt = 0, A[n], B[n];
    for (auto &it : A) {
      cin >> it;
      x = min (x, it);
    }
    for (auto &it : B) {
      cin >> it;
      y = min (y, it);
    }
    for (i = 0; i < n; i++) {
      v1 = A[i] - x;
      v2 = B[i] - y;
      ll mn = min(v1, v2);
      ll mx = max (v1, v2);
      cnt += mn;
      cnt += (mx - mn);
    }
    cout << cnt << endl;
  }
  return 0;
}
