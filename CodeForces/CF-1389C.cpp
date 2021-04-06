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
    int n, i, j;
    string s;
    cin >> s;
    int ans = 0;
    for (i = 0; i <= 9; i++) {
      int cnt = 0;
      for (char c : s)
        if (c - '0' == i)
        cnt++;
      ans = max (ans, cnt);
      for (j = 0; j <= 9; j++) {
        int cnt = 0;
        for (char c : s) {
          if (cnt % 2 == 0) {
            if (c - '0' == i) cnt++;
          }
          else {
            if (c - '0' == j) cnt++;
          }
        }
        if (cnt % 2) cnt--;
        ans = max (ans, cnt);
      }
    }
    cout << s.size() - ans << endl;
  }
  return 0;
}

