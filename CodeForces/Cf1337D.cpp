#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t, r, g, b, i, j, R[100010], G[100010], B[100010];
   cin >> t;
   while (t--) {
      cin >> r >> g >> b;
      int min1 = 0, min2 = 0, min3 = 0;
      for (i = 0; i < r; i++) {
         cin >> R[i];
      }
      sort(R, R + r);
      for (i = 0; i < g; i++) {
         cin >> G[i];
      }
      sort (G, G + g);
      for (i = 0; i < b; i++) {
         cin >> B[i];
      }
      sort (B, B + b);
      min1 = abs(R[0] - G[0]);
      min2 = abs(G[0] - B[0]);
      min3 = abs(B[0] - R[0]);
      long long int mark1 = R[0], mark2 = G[0], mark3 = B[0];

      for (i = 0; i < r; i++) {
         for (j = 0; j < g; j++) {
            if (abs(R[i] - G[j]) <= min1 ) {
               min1 = abs(R[i] - G[j]);
               mark1 = R[i];
               mark2 = G[j];
             }
            if (min1 == 0) break;
         }
         break;
      }
       for (i = 0; i < b; i++) {
          if (abs(mark2 - B[j]) <= min2 ) {
             min2 = abs(mark2 - B[j]);
             mark3 = B[j];
           }
          if (min2 == 0) break;
       }

      int m1 = mark1;
      mark1 = abs(mark1 - mark2);
      mark2 = abs(mark2 - mark3);
      mark3 = abs(mark3 - m1);
      //cout << min1 * min1 << ' ' << min2 * min2 << ' ' << min3 * min3 << endl;
      cout << (mark1 * mark1) + (mark2 * mark2)+ (mark3 * mark3) << endl;
   }
   return 0;

}
