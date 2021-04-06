#include <bits/stdc++.h>

using namespace std;

int main() {
   long long t, n, m;
   cin >> t;
   while (t--) {
      cin >> n >> m;
      if (n == 1) cout << 0 << endl;
      else if (n == 2) cout << m << endl;
      else cout << m * 2 << endl;
   }
   return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main() {
   int t, i, j, A[50], B[50], sumA, sumB;
   cin >> t;
   while (t--) {
      cin >> n >> m;
      sumA = 0, sumB = 0;
      for(i = 0; i < n; i++) {
         cin >> A[i];
         sumA += A[i];
      }
      for(i = 0; i < n; i++) {
         cin >> B[i];
         sumB += B[i];
      }
      if (sumA > sumB) cout << sumA << endl;
      sort (A, A + n);
      sort (B, )

   }


   return 0;
}
