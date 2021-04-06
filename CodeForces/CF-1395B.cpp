#include <bits/stdc++.h>
using namespace std;

int main () {
  int i, j, n, m, x, y;
  cin >> n >> m >> x >> y;

  for (i = x, j = y; j <= m; j++) cout << i << ' ' << j << endl;
  for (i = x, j = y -1; j >= 1; j--)  cout << i  << ' ' << j << endl;
  int cnt = 1;
  for (i = x + 1; i <= n; i++, cnt++) {
    if (cnt % 2) {
      for (j = 1; j <= m; j++) cout << i << ' ' << j << endl;
    }
    else {
      for (j = m; j >= 1; j--) cout << i << ' ' << j << endl;
    }
  }
  if ((n - x) % 2 == 0) {
    cnt = 1;
    for (i = 1; i < x; i++, cnt++) {
      if (cnt % 2) {
        for (j = 1; j <= m; j++) cout << i << ' ' << j << endl;
      }
      else {
        for (j = m; j >= 1; j--) cout << i << ' ' << j << endl;
      }
    }
  }
  else {
    cnt = 1;
    for (i = 1; i < x; i++, cnt++) {
      if (cnt % 2) {
        for (j = m; j >= 1; j--) cout << i << ' ' << j << endl;
      }
      else {
        for (j = 1; j <= m; j++)  cout << i << ' ' << j << endl;
      }
    }
  }
  return 0;
}
