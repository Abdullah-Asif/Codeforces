#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  IOS
  int t;
  cin >> t;
  while (t--) {
    int n, i;
    cin >> n;
    int ara[n];
    ll res = 0;
    for (i = 0; i < n; i++) {
      cin >> ara[i];
    }
    for (i = n - 1; i > 0; i--) {
      if (ara[i] < ara[i-1])
        res += (ara[i-1] - ara[i]);
    }
    cout << res << endl;
  }
  return 0;
}
