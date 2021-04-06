#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n, x, i;
    cin >> n >> x;
    vector <ll> vc(n);
    for (i = 0; i < n; i++) {
      cin >> vc[i];
    }
    sort (vc.begin(), vc.end(), greater <ll> ());
    ll ans = 0, sum = 0;
    for (i = 0; i < n; i++) {
      sum += vc[i];
      if (sum >= (i + 1) * x)
        ans++;
    }
    cout << ans << endl;
  }
  return 0;
}

