#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  IOS;
  int t;
  cin >> t;
  while (t--) {
    int i;
    int ara[4];
    for (auto &it : ara) cin >> it;
    int even = 0, odd = 0;
    for (auto it : ara)
      it % 2 ? odd++ : even++;
    if (even >= 3) cout << "Yes" << endl;
    else if (odd >= 3 && (ara[0] * ara[1] * ara[2] != 0))
      cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}

