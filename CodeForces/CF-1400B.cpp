#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

pair <int, int> carry(int max_carry, int cnts, int cntw, int s, int w) {
  int x = min (max_carry / s, cnts);
  max_carry -= (x * s);
  int y = min (max_carry / w, cntw);
  return make_pair(x, y);
}


int main() {
  int t;
  cin >> t;
  while (t--) {
    int p, f, cnts, cntw, s, w;
    cin >> p >> f;
    cin >> cnts >> cntw;
    cin >> s >> w;
    if (s > w) {
      swap (s, w);
      swap (cnts, cntw);
    }
    int total_carry = 0;
    for (int i = 0; i <= cnts; i++) {
      pair <int , int> x = carry (p, i, cntw, s, w);
      pair <int , int> y = carry (f, cnts - x.first, cntw - x.second, s, w);
      int res = x.first + x.second + y.first + y.second;
      total_carry = max (total_carry, res);
    }
    cout << total_carry << endl;
  }
  return 0;
}

