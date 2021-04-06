#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i, j;
    cin >> n;
    int ara[n];
    for (i = 0; i < n; i++) {
      cin >> ara[i];
    }
    string s;
    for (i = 0; i < 200; i++) {
      s += 'a';
    }
    cout << s << endl;
    for (i = 0; i < n; i++) {
      for (j = 0; j < ara[i]; j++) {
        cout << s[j];
      }
      s[ara[i]] = s[ara[i]] + 1;
      if (s[ara[i]] > 122)
        s[ara[i]] = 'a';
      for (j = ara[i]; j < 200; j++) {
        cout << s[j];
      }
      cout << endl;
    }
  }
  return 0;
}

