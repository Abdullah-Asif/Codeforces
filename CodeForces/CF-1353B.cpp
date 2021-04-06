
#include <bits/stdc++.h>

using namespace std;

int main() {
   int t, i, j, A[50], B[50],n, m;
   cin >> t;
   while (t--) {
      cin >> n >> m;

      for(i = 0; i < n; i++) {
         cin >> A[i];
      }
      for(i = 0; i < n; i++) {
         cin >> B[i];
      }
      sort (A, A + n);
      sort (B, B + n);
      int a = 0, sum = 0;
      for (i = 0, j = n-1; i < n, j >= 0; i++, j--) {
         if (A[i] < B[j] && a < m) {
            swap (A[i], B[j]);
            a++;
         }
         sum += A[i];
      }
      cout << sum << endl;
   }
   return 0;
}
