#include <bits/stdc++.h>
using namespace std;

void solve () {
    int n, k, i, j, ans;
    string s;
    cin >> n >> k;
    cin >> s;
    ans = 0;
    set <int> st;
    for (i = 0; i < s.size(); ++i) {
      if (s[i] == '1')
         st.insert(i);
    }
    for (i = 0; i < s.size(); ++i) {
      if (s[i] == '0') {
         auto it = st.lower_bound(i - k);
         if (it == st.end() || *it > i+k) {
            ans++;
            s[i] = '1';
            st.insert(i);
         }
      }
    }
    cout << ans << endl;
}

int main () {
    int t;
    cin >> t;
    while (t--)  {
        solve();
    }
    return 0;
}
