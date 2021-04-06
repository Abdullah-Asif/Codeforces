#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long  n, k;
    cin >> n >> k;
    cout << (n % 2 == k % 2 && k * k <= n ? "YES" : "NO") << endl;
  }
  return 0;
}

