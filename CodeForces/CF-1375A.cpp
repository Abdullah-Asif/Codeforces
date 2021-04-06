#include <bits/stdc++.h>

using namespace std;

int main() {
   int t, n, i;
   cin >> t;
   while (t--) {
      cin >> n;
      int ara[n];
      for (i = 0; i < n; i++) {
         cin >> ara[i];
      }
      for (i = 0 ; i < n; i++) {
         if(i % 2 == 0)
            ara[i] = abs(ara[i]);
         else {
            if (ara[i] > 0)
               ara[i] = ara[i] * -1;
         }
      }
      for (auto it : ara)
         cout << it << ' ';
      cout << endl;
   }
   return 0;
}

