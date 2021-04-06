#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;
int main() {
  ll n, i;
  cin >> n;
  ll ara[n];
  for (i = 0; i < n; i++) {
    cin >> ara[i];
  }
  ll mx = 0;
  for (i = 0; i < n; i++) {
    cout << ara[i] + mx << ' ';
    mx = max (mx, ara[i] + mx);
  }
  cout << endl;


  return 0;
}

