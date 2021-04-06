#include <bits/stdc++.h>

using namespace std;

int main() {
   int t, n, i;
   cin >> t;
   while (t--) {
      cin >> n;
      int one = 0, zero = 0, flag = 1;
      int A[n], B[n];
      for (i = 0; i < n; i++) {
         cin >> A[i];
      }
      for (i = 0; i < n; i++) {
         cin >> B[i];
         if (B[i] == 1) one++;
         else zero++;
      }
      for(i = 0; i < n-1; i++) {
         if (A[i] > A[i+1]) {
            flag = 0;
            break;
         }
      }
      if (flag == 1) {
         cout << "YES\n";
         continue;
      }
      else if ((one == n || zero == n) && flag == 0)
         cout << "NO\n";
      else cout << "YES\n";

   }
   return 0;
}
