#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;
int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll n, i;
    cin >> n;
    ll ara[n], sum = 0, one = 0;
    for (i = 0; i < n; i++) {
      cin >> ara[i];
      sum += ara[i];
    }
    if (sum == n) {
      if (sum % 2 == 1) cout << "First" << endl;
      else cout << "Second" << endl;
    }
    else {
      for (i = 0; i < n; i++) {
        if (ara[i] == 1) one++;
        else break;
      }
      if (one % 2 == 1) cout << "Second" << endl;
      else cout << "First" << endl;
    }
  }
  return 0;
}

