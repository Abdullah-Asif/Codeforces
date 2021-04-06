#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, k, i, cnt = 0;
   cin >> n >> k;
   int ara[n*2+2];
   for (i = 1; i <= n*2+1; i++) {
      cin >> ara[i];
   }
   for (i = 2; i <= n*2 + 1; i += 2) {
      if ((ara[i] - ara[i-1]) > 1 && (ara[i] - ara[i+1]) > 1) {
         ara[i] = ara[i] - 1;
         cnt++;
      }
      if (cnt == k) break;
   }
   for (i = 1;  i <= n * 2 + 1; i++) {
      cout << ara[i] << ' ';
   }
   cout << endl;
   return 0;
}
