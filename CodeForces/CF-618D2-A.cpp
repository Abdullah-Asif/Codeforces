#include <bits/stdc++.h>
using namespace std;

int main()
{
   int sum, res, A[110], i, n, t;

   cin >> t;
   while (t--) {
      cin >> n;
      sum = 0, res = 0;
      for (i = 0; i < n; i++) {
         cin >> A[i];
         if (A[i] == 0) {
            A[i] = 1;
            res++;
         }
         sum += A[i];
      }
      if (sum == 0) cout << res+1 << endl;
      else cout << res << endl;
   }
}
