#include <bits/stdc++.h>

using namespace std;

void win() {
   cout << "Ashishgup\n";
}
void lose() {
   cout << "FastestFinger\n";
}
void solve () {
      int n;
      cin >> n;
      if (n == 1) return lose();
      if (n == 2) return win();
      if (n & 1) return win();
      if (n & (n-1) == 0) return win();
      if (n % 2 == 0) {
         for (int i = 3; i*i <= n; i++) {
            if (n % i == 0) {
               if (i % 2 == 1 || (n/i) % 2 == 1)
                  return win();
            }
         }
         return lose();
      }
   }

int main () {
   int t, n;
   cin >> t;
   while (t--) {
      solve();
   }
   return 0;
}
