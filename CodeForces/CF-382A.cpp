#include <bits/stdc++.h>
using namespace std;

int main() {
   int f_half,s_half,diff, i, j;
   string U, Un;
   cin >> U >> Un;
   for(i = 0; i < U.size(); i++) {
      if (U[i] == '|') break;
   }
   f_half = i - 0;
   s_half = (U.size() - 1) - i;
   diff = abs(f_half - s_half);
   if ((diff > Un.size()) || (diff < Un.size() && (Un.size() - diff) % 2 == 1))
       cout << "Impossible\n";
   else {
      if (f_half < s_half) {
         for (i  = 0; i < diff; i++) {
            U = Un[i] + U;
         }
         for(i = i, j = Un.size() - 1; i < Un.size() && i < j; i++, j--) {
            U = Un[i] + U;
            U = U + Un[j ];
         }
      }
      else {
         for (i  = 0; i < diff; i++) {
            U = U + Un[i];
         }
         for(i = i, j = Un.size() - 1; i < Un.size() && i < j; i++, j--) {
            U = Un[i] + U;
            U = U + Un[j];
         }
      }
      cout << U << endl;
   }
   return 0;
}
