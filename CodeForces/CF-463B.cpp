#include <bits/stdc++.h>

using namespace std;

int main() {
   int n, i, d = 0, e = 0;
   cin >> n;
   int ara[n+5];
   for (i = 1; i <= n; i++) {
      cin >> ara[i];
       d = max (d, ara[i]);
   }
   cout << d << endl;
   return 0;
}
