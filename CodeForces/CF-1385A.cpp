#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int t;
  cin >> t;
  while (t--) {
    vector <int> vc(3);
    for (auto &it : vc)
      cin >> it;
    sort (vc.begin(), vc.end());
    if (vc[1] != vc[2]) cout << "NO" << endl;
    else cout << "YES" << endl << vc[0] << ' ' << vc[0] << ' ' << vc[2] << endl;

  }
  return 0;
}
