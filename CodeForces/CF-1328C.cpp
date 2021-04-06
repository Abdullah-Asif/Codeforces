#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i, j;
    cin >> n;
    string s, s1, s2;
    cin >> s;
    int flag = 0;
    for (i = 0; i < s.size(); i++) {
      if (s[i] == '2') {
        if (flag == 1) {
          s1 += '0';
          s2 += '2';
        }
        else {
          s1 += '1';
          s2 += '1';
        }
      }
      else if (s[i] == '1') {
        if (flag == 1) {
          s1 += '0';
          s2 += '1';
        }
        else {
          s1 += '1';
          s2 += '0';
        }
        flag = 1;
      }
      else {
        s1 += '0';
        s2 += '0';
      }
    }
    cout << s1 << endl << s2 << endl;
  }
  return 0;
}

