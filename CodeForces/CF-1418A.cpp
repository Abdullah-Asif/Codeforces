#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll x, y, k;
    cin >> x >> y >> k;
    ll ans = (y * k + k) - 1;
    ll res =(ans + x-2) / (x-1);
    //if (ans % res) res += 1;
    cout << res + k << endl;
  }
  return 0;
}

