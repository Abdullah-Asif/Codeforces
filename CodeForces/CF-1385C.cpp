#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i;
    cin >> n;
    vector <int> vc(n);
    for (auto &it : vc)
      cin >> it;
    int pos = n - 1;
    while (pos > 0 && vc[pos] <= vc[pos-1]) pos--;
    while (pos > 0 && vc[pos] >= vc[pos-1]) pos--;
    cout << pos << endl;
  }
  return 0;
}

