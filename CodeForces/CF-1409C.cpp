#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x, y;
    cin >> n >> x >> y;
    vector <int> vc;
    int sub = y - x;
    for (int i = 1; i <= sub; i++) {
      int k;
      if (sub % i == 0) k = sub/ i;
      int f = 0;
      int diff = i;
      if (k + 1 <= n) {
        int cnt = 0;
        f = 1;
        for (int j = x; j <= y; j+= diff) {
          vc.push_back(j);
          cnt++;
        }
        int left = x - diff;
        while (left > 0 && cnt < n) {
            vc.push_back(left);
            cnt++;
            left -= diff;
        }
        int right = y + diff;
        while (cnt < n) {
            vc.push_back(right);
            cnt++;
            right += diff;
        }
        if (f) break;
      }
      if (f) break;
    }
    for (auto it :vc)
      cout << it << ' ';
    cout << endl;
  }
  return 0;
}

