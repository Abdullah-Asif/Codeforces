#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long int t, n, i, sum, P, N;
   cin >> t;
   while (t--) {
      cin >> n;
      long long int ara[n+10], P = 0, N = -999999999999, sum = 0;
      for (i = 0; i < n; i++) {
         cin >> ara[i];
      }
      for (i = 0; i < n; i++) {
         if (ara[i] > 0) {
            while (ara[i] > 0 && i < n) {
               if (ara[i] > P) {
                  P = ara[i];
               }
               i++;
            }
            sum += P;
            P = 0, i--;
         }
         else {
            if (ara[i] < 0) {
                while (ara[i] < 0 && i < n) {
                  if (ara[i] > N) {
                     N = ara[i];
                  }
                  i++;
               }
               sum += N;
               N = -999999999999,i--;
            }
         }
      }
      cout << sum << endl;
   }

}
