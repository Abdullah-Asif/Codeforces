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
    set <int> s;
    cin >> n;
    int x = n;
    while (n--) {
      int num;
      cin >> num;
      s.insert(num);
    }
    if (s.size() == 1) cout << x << endl;
    else cout << 1 << endl;
  }


  return 0;
}

