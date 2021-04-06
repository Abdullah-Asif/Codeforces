#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ara[n],B[n];
    for (int i = 0; i < n; i++) {
      cin >> ara[i];
      B[i] = ara[i];
    }
    sort (B, B + n);
    int can = ((n * (n -1))/ 2) - 1;
    int f = 0, c = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
      if (f == 0 && ara[i] == B[i]) continue;
      if (i + 1 < n) {
        int a = ara[i], b = ara[i+1], c = B[i], d = B[i+1];
        if (a == d && b == c) {
          cnt += 1;
          f = 1;
        }
      }
      if (ara[i] != B[i] ) {
        c++;
        f = 1;
      }
      //cout << ara[i] << ' ' << B[i] << endl;
    }
    int res = c * 2 - cnt;
    //cout << c * 2 << ' ' << cnt << endl;
    if (res <= can) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}

