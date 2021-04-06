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
    int ara[n];
    for (int i = 0; i < n; i++) {
      cin >> ara[i];
    }
    int x = ara[0] + ara[1];
    int indice;
    int flag = 0;
    for (int i = 2; i < n; i++) {
      if (x <= ara[i]) {
        flag = 1;
        indice = i;
        break;
      }
    }
    if (flag == 1) cout << 1 << ' ' << 2 << ' ' << indice + 1 << endl;
    else cout << -1 << endl;
  }
  return 0;
}

