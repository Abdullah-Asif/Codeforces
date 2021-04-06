#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  read :
  while (t--) {
    int n, k, i, j;
    cin >> n >> k;
    string s;
    cin >> s;
    bool check[n];
    memset (check, 0, sizeof(check));
    for (i = 0; i < n; i++) {
      if (s[i] != '?' && !check[i]) {
        for (j = i % k; j < n; j += k) {
          if (s[j] != '?' && s[i] != s[j]) {
            cout << "NO" << endl;
            goto read;
          }
          s[j] = s[i];
          check[j] = true;
        }
      }
    }
    int one = 0, zero = 0, Q = 0;
    for (i = 0; i < k; i++) {
      if(s[i] == '1') one++;
      else if (s[i] == '0') zero++;
      else Q++;
    }
    if ((k/2 - one) + (k/2 - zero) == Q && (k/2 >= one && k/2 >= zero)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}
