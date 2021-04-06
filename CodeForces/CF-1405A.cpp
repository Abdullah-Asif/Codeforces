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
    int ara[n];
    for (auto &it : ara)
      cin >> it;
    for (int i = n -1; i >= 0; i--) {
      cout << ara[i] << ' ';
    }
    cout << endl;
  }
  return 0;
}

