#include <bits/stdc++.h>

using namespace std;

int main() {
   int n, a, i, j, cnt = 0;
   cin >> n >> a;
   int ara[n+5];
   for (i = 1; i <= n; i++) {
      cin >> ara[i];
   }
   if (ara[a] == 1) cnt++;
   for (i = 1; ; i++) {
      if (a + i <= n && a - i >= 1) {
         if (ara[a+i] == 1 && ara[a-i] == 1) {
             cnt += 2;
         }
      }
      else break;
   }
   if (n / 2 >= a) {
      for (a = a + i; a <= n; a++) {
         if (ara[a] == 1) cnt++;
      }
   }
   else  {
      for (a = a - i; a >= 1; a--) {
         if (ara[a] == 1) cnt++;
      }
   }
   cout << cnt << endl;
   return 0;
}
