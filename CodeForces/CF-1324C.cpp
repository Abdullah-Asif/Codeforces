#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int t;
  cin >> t;
  while (t--) {
    int i;
    string s;
    cin >> s;
    int res = 0, cnt = 0;
    for (i = 0; i < s.size(); i++) {
      if (s[i] == 'R')
        cnt = 0;
      else {
        cnt++;
        res = max(res, cnt);
      }
    }
    cout << res + 1 << endl;
  }
  return 0;
}

