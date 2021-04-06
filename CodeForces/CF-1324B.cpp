#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i, j, x;
    cin >> n;
    int ara[n];
    for (auto &it : ara)
      cin >> it;
    int flag = 0;
    for (i = 0; i < n; i++) {
      for (j = i+2; j < n; j++) {
        if (ara[i] == ara[j]) {
          flag = 1;
          break;
        }
      }
    }
    cout << (flag == 1 ? "YES" : "NO" ) << endl;
  }
  return 0;
}

