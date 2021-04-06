#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x1, y1, z1, x2, y2, z2;
    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;
    int sum = 0;
    int b = min (z2, x1);
    b = z2 - b;
    int c = min (y1, x2);
    c = y1 - c;
    int a = min(z1, y2);
    c = min (b, c);
    sum = (a * 2) + (c * (-2));
    cout << sum << endl;
  }
  return 0;
}

