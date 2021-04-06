#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
  int t;
  cin >> t;
  read :
  while (t--) {
    int n;
    cin >> n;
    int ara[n];
    for (auto &it : ara)
      cin >> it;
    sort (ara, ara + n);
    ll res = -3e18;
    for (int i = 0; i <= 5; i++) {
      ll prod = 1;
      for (int j = 0; j < i; j++) prod *= ara[j];
      for (int j = i; j < 5; j++) prod *= ara[n-5+j];
      res = max (res, prod);
    }
    cout << res << endl;
  }

}
