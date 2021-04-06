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
      if (n < 31) cout << "NO" << endl;
      else {
        cout << "YES" << endl;
        int x = n - 30;
        if ((x == 14 || x ==  10 || x == 6) && (n - 31 != 15))
          cout << "15 10 6" << ' ' << n - 31 << endl;
        else
          cout << "14 10 6" << ' ' << n - 30 << endl;
      }
  }
  return 0;
}

