#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n,i, num;
    cin >> n;
    set < int > s;
    vector <int> vc;
    for (i = 1; i <= n * 2; i++) {
      cin >> num;
      if (s.count(num) == 0)
        vc.push_back(num);
      s.insert(num);
    }
    for (auto it : vc)
      cout << it << ' ';
    cout << endl;
  }
  return 0;
}
