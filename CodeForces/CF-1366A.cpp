#include <bits/stdc++.h>

using namespace std;

int main() {
   long long t, a, b;
   cin >> t;
   while (t--) {
      cin >> a >> b;
      if (a * 2 <= b || b * <= a)
         cout << min (a,b) << endl;
      else cout << (a + b) / 3 << endl;
   }
   return 0;
}
