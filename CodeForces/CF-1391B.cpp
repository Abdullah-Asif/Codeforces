#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n,m, i, j;
    cin >> n >> m;
    char c[n][m];
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        cin >> c[i][j];
      }
    }
    int cnt = 0;
    for (i = 0; i < n; i++) {
      if (c[i][m-1] == 'R'){
        cnt++;
      }
    }
    for (i = 0; i < m; i++) {
      if (c[n-1][i] == 'D'){
        cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
