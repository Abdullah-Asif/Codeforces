#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i, cnt;
    cin >> n;
    string s;
    cin >> s;
    char ch = 97, x = 97;
    ///int sz = s.size()- 1;
    int log = log2(n);
    cnt = 0;
    while (s.size() != 1) {
      int mx = 0, first = 0, last = 0;
      for (i = 0; i < s.size() / 2; i++) {
        if (s[i] == ch)
          first++;
      }
      for (i = s.size() - 1; i >= s.size() / 2; i--) {
        if (s[i] == ch)
          last++;
      }
      mx = max (first, last);
      cnt += (s.size() / 2) - mx;
      ch += 1;
      if (mx == 0) {
        int c1 = 0, c2 = 0;
        for (i = 0; i < s.size() / 2; i++) {
          if (s[i] <= x + log)
            c1++;
        }
        for (i = s.size() - 1; i >= s.size() / 2; i--) {
          if (s[i] <= x + log)
            c2++;
        }
        if (c1 >= c2) s.erase (s.size()- s.size()/2);
        else  s.erase (0, s.size()/2);
      }
      else if (mx == first) s.erase (0, s.size()/2);
      else s.erase (s.size()- s.size()/2);
    }
    if (s[s.size()- 1] != (x+log))
      cnt++;
    cout << cnt << endl;
  }
  return 0;
}
