#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int n, i, j, x, one = 0, best = 0;
  cin >> n;
  int ara[n];
  for (i = 0; i < n; i++) {
    cin >> ara[i];
    if (ara[i] == 1) {
      one++;
      ara[i] = -1;
    }
    else ara[i] = 1;
  }
  int sum = 0;
  for (i = 0; i < n; i++) {
    sum = max (ara[i], sum + ara[i]);
    best = max(sum, best);
  }
  if (best == 0) best = -1;
  cout << best + one << endl;
  return 0;
}
