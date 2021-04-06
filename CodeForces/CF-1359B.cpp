#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  IOS
  int t;
  cin >> t;
  while (t--) {
    int i, j, n, m, x, y;
    cin >> n >> m >> x >> y;
    int sum = 0;
    char ara[n][m];
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        cin >> ara[i][j];
      }
    }
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        if (ara[i][j] == '.') {
          if (j + 1 < m && ara[i][j+1] =='.') {
            if (x * 2 <= y) {
              sum += (x * 2);
              j += 1;
            }
            else {sum += y;
              j += 1;}
          }
          else sum += x;
        }
      }
    }
    cout << sum << endl;
  }
  return 0;
}
