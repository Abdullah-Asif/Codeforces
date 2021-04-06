#include <bits/stdc++.h>

using namespace std;

int main() {
   int i, j, k, n, cnt, mx = 0, temp;
   cin >> n;
   int ara[n];
   for (i = 0; i < n; i++) {
      cin >> ara[i];
   }
   for (i = 0; i < n; i++) {
      cnt = 0;
      temp = ara[i];
      for (j = i + 1; j < n; j++) {
         if (ara[j] <= temp) {
            temp = ara[j];
            cnt++;
         }
         else {break;}
      }
      temp = ara[i];
      for (k = i - 1; k >= 0; k--) {
         if (ara[k] <= temp) {
            temp = ara[k];
            cnt++;
         }
        else {break;}
      }
      mx = max (mx, cnt);
   }
   cout << mx+1 << endl;
   return 0;
}
