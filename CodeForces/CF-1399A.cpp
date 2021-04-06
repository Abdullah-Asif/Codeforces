
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
    cin >> n;
    int ara[n];
    for (auto &it : ara)
      cin >> it;
    sort (ara, ara + n);
    int flag = 0;
    for (i = 1 ; i < n; i++) {
      if (ara[i] - ara[i-1] > 1) {
        flag = 1;
        break;
      }
    }
    if (flag == 1) cout << "NO" << endl;
    else cout << "YES" << endl;
  }

  return 0;
}
