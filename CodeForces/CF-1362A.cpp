#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   ll t, a, b, n;
   cin >> t;
   while (t--) {
      cin >> a >> b;
      ll cnt = 0;
      if (a > b) swap(a, b);
      while (a < b) {
        if (a * 8 <= b) a *= 8;
        else if (a * 4 <= b) a *= 4;
        else if (a * 2 <= b) a *= 2;
        else break;
        cnt++;
      }
      if (a == b) cout << cnt << endl;
      else cout << -1 << endl;
   }
   return 0;
}
