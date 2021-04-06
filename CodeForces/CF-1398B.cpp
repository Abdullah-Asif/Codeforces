#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    vector <int> vc;
    int cnt, i, j;
    for (i = 0; i < s.size(); i++) {
      if (s[i] == '1') {
        cnt = 1;
        for (j = i + 1; j < s.size(); j++) {
          if (s[j] == '1') cnt++;
          else {
            i = j;
            break;
          }
        }
        vc.push_back(cnt);
        i = j;
      }
    }
    sort (vc.begin(), vc.end(), greater <int>());
    int res = 0;
    for (i = 0; i < vc.size(); i += 2)
       res += vc[i];
    cout << res << endl;
  }
  return 0;
}

