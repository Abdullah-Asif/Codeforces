#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i;
    cin >> n;
    int ara[n+1];
    for (i = 1; i <= n; i++) {
      cin >> ara[i];
    }
    int c1 = 1, c2 = 1, x, flag = 0;
    for (i = 2; i <= n; i++) {
      if (ara[1] < ara[i]) {
        c1++;
        x = i;
        flag = 1;
        break;
      }
    }
  }

  return 0;
}

