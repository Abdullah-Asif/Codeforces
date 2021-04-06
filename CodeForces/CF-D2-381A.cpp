#include <bits/stdc++.h>

using namespace std;

int main ()
{

   int A[1020], n, i, j, sr = 0, dm = 0, x = 0;
   cin >> n;
   for (x = 0; x < n; x++) {
      cin >> A[x];
   }
   i = 0, j = n -1;
   for (x = 0; x < n; x++) {
      if (x % 2 == 0) {
         if (A[i] > A[j]) {
            sr = sr + A[i];
            i++;
         }
         else if(A[j] > A[i]) {
            sr = sr + A[j];
            j--;
         }
         else sr = sr + A[i];
      }
      else {
         if (A[i] > A[j]) {
            dm = dm + A[i];
            i++;
         }
         else if (A[j] > A[i]){
            dm = dm + A[j];
            j--;
         }
         else dm += A[i];
      }
   }
   cout << sr << ' ' << dm << endl;
   return 0;
}
