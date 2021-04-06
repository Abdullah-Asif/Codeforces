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
    int A[n], B[n];
    for (auto &it : A)
      cin >> it;
    for (auto &it : B)
      cin >> it;
    int pos = 0, neg = 0, flag = 0;
    for (i = 0; i <n; i++) {
      int res = B[i] - A[i];
      if (pos == 0 && neg == 0 && res != 0) {
        flag = 1;
        break;
      }
      if (res > 0) {
        if (pos == 0) {
          flag = 1;
          break;
        }
      }
      if (res < 0) {
        if (neg == 0) {
          flag = 1;
          break;
        }
      }
      if (A[i] == 1) pos = 1;
      if (A[i] == -1) neg = -1;
    }
    if (flag == 1) cout << "NO" << endl;
    else cout << "YES" << endl;
  }
  return 0;
}

