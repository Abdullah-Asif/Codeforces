#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m, i, j;
    cin >> n >> m;
    int A[n],B[m];
    for (i = 0; i < n; i++) {
      cin >> A[i];
    }
    for (i = 0; i < m; i++)
      cin >> B[i];
    int flag = 0;
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        if (A[i] == B[j]) {
          cout << "YES" << endl << 1 << ' ' <<  A[i] << endl;
          flag = 1;
          break;
        }
      }
      if (flag == 1) break;
    }
    if (flag == 0) cout << "NO" << endl;
  }
  return 0;
}
