#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int ara[n];
    for (int i = 0; i < n; i++) {
      cin >> ara[i];
    }
    sort (ara, ara + n);
    int res = 0;
    for (int i = 1; i < n; i++) {
      int temp = k - ara[i];
      temp = temp / ara[0];
      res += temp;
    }
    cout << res << endl;
  }
  return 0;
}

