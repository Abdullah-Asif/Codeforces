#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  IOS
  int t;
  cin >> t;
  while (t--) {
    int n, i;
    cin >> n;
    map <int, int> mp;
    for (i = 0; i < n; i++) {
      int num;
      cin >> num;
      mp[num]++;
    }
    vector <int > vc;
    for (auto it : mp)
      vc.push_back(it.second);
    sort (vc.begin(), vc.end(), greater <int>());
    int cnt = 1;
    for (i = 0; i < vc.size() - 1; i++) {
      if (vc[i] == vc[i+1]) cnt++;
      else break;
    }
    //cout << cnt << ' ' << vc[0] << endl;
    int res = (n - cnt) / (vc[0] - 1);
    cout << res - 1 << endl;
  }
  return 0;
}

