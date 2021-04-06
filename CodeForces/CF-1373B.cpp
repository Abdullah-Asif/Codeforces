#include <bits/stdc++.h>

using namespace std;

int main() {
   int t;
   cin >> t;
   while (t--) {
      vector <int> v(2);
      string s;
      cin >> s;
      for (char c : s)
         v[c - '0']++;
         int mn = min (v[0],v[1]);
      cout << ((mn & 1) ? "DA" : "NET") << endl;
   }
   return 0;
}
