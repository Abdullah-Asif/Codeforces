#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dSum (ll n) {
  int sum = 0;
  while (n != 0) {
    sum = sum + (n % 10);
    n /= 10;
  }
  return sum;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll orig, n, s, m;
    cin >> orig >> s;
    n = orig, m = 10;
    while (dSum(n) > s) {
      while (n % m == 0) m *= 10;
      n += (m - n % m);
    }
    cout << n - orig << endl;
  }
}
