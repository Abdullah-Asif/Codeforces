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
    int MIN = n - 1;
    for (int i = 2; i * i <= n; i++) {
      int tmp = n / i;
      if (n % i) tmp += 1;
      tmp--;
      int res = tmp + (i - 1);
      MIN = min (MIN, res);
    }
    cout << MIN << endl;
  }

  return 0;
}

