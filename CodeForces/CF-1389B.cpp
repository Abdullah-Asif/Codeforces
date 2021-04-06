#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n, k, z, i, j, cnt = 0;
    cin >> n >> k >> z;
    int ara[n+1];
    for (i = 1; i <= n; i++) {
      cin >> ara[i];
    }
    ll mx = 0, x, y, s, sum = 0;
    for (i = 1; i <= k+1; i++)
      sum += ara[i];
    for (i = 1; i <= k; i++) {
      if ((ara[i] + ara[i+1]) >= mx) {
        mx = ara[i] + ara[i+1];
        x = i;
        y = i + 1;
        if (ara[i] >= ara[i+1]) {
          s = i;
          cnt = i - 1;
        }
        else {
          s = i+1;cnt = i;
        }
      }
    }
    cout << x << ' ' << y << endl;
    if (s < n) s += 1;
    if (cnt < k) cnt++;
    cnt = k - cnt;
    int v = cnt / z;
    sum += (v * mx);
    sum += max (ara[x], ara[y]);
    cout << sum << endl;
    //cout << sum << endl;

  }
  return 0;
}

