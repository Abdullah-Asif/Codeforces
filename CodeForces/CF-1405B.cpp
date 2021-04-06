#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n, i, j, f;
    cin >> n;
    ll ara[n], val = 0, coin = 0;
    for (auto &it : ara)
      cin >> it;
    for (i = n-1; i >= 0; i--) {
      val += ara[i];
      if (val > 0) {
        coin += val;
        val = 0;
      }
    }
    cout << coin << endl;
  }
  return 0;
}

