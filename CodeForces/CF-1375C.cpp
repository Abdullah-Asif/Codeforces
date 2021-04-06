#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n;
  cin >> n;
  int ara[n];
  for (int i = 0; i < n; i++) {
    cin >> ara[i];
  }
  if (ara[0] < ara[n-1]) {
    cout << "YES\n";
  }
  else cout << "NO\n";
}

int main() {
   int t;
   cin >> t;
   while (t--) {
     solve();
   }
   return 0;
}
