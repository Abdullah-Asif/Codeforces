#include <bits/stdc++.h>
using namespace std;

int A[105];

int main()
{
   int X[101], Y[101], n, i, p, q, res = 0;

   cin >> n;

   cin >> p;

   for (i = 0; i < p; i++) {
      cin >> X[i];
      A[X[i]] = 1;
   }
   cin >> q;

   for (i = 0; i < q; i++) {
      cin >> Y[i];
      A[Y[i]] = 1;
   }

   for (i = 1; i <= n; i++) {
      if (A[i] == 1)
         res++;
   }
   if (res == n)
      cout << "I become the guy.\n";
   else
      cout << "Oh, my keyboard!\n";

   return 0;

}
