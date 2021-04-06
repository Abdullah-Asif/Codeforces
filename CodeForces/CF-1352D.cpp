#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   int t, n, x, i, j, moves, alice_last, bob_last, talice, tbob;
   cin >> t;
   while (t--) {
      cin >> n;
      moves = 0, alice_last = 0, bob_last = 0, talice= 0, tbob = 0;
      int ara[n+10];
      for (i = 1; i <= n; i++) {
         cin >> ara[i];
      }
      i = 1, j = n;
      for (x = 1; i <= j; x++) {
         if (x % 2 == 1) {
            alice_last = 0;
            while (alice_last <= bob_last && i <=j) {
               alice_last += ara[i];
               i++;
            }
            talice += alice_last;
         }
         else {
            bob_last = 0;
            while (bob_last <= alice_last && j >= i) {
               bob_last += ara[j];
               j--;
            }
            tbob += bob_last;
         }
         moves++;
      }
      cout << moves << ' ' << talice << ' ' << tbob << endl;

   }
   return 0;
}

