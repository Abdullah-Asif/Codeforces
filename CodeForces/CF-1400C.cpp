#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, i;
    string S;
    cin >> S;
    cin >> x;
    int N = S.size();
    int f = 0;
    string W(N, '0');
    for (i = 0; i < N; i++) {
      if (S[i] == '1') {
        if ((i - x >= 0) && (i - 2 * x < 0 || S[i - 2 * x] == '1')) W[i - x] = '1';
        else if ((i + x < N) && (i + 2 * x >= N || S[i + 2 * x] == '1')) W[i + x] = '1';
        else {
          f = 1;
          break;
        }
      }
      if (f) break;
    }
    if (f) cout << -1 << endl;
    else cout << W << endl;
  }
  return 0;
}

