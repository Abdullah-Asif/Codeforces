#include <bits/stdc++.h>

using namespace std;

int main() {
   int r1, r2, c1, c2, d1, d2, x1, x2, y1, y2, flag = 0;
   cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
   for (int i = 9; i >= 1; i--) {
      x1 = i;
      x2 = r1 - x1;
      y1 = c1 - x1;
      y2 = r2 - y1;
      if(x1 + x2 == r1 && y1 + y2 == r2 && x1 + y1 == c1 && x2 + y2 == c2 && x1 + y2 == d1 && x2 + y1 == d2)
      if(x1 != x2 && x1 != y1 && x1 != y2)
      if(x2 != x1 && x2 != y1 && x2 != y2)
      if(y1 != x1 && y1 != x2 && y1 != y2)
      if(y2 != x1 && y2 != x2 && y2 != y1)
      if (x1 >= 1 && x2 >= 1 && y1 >= 1 && y2 >= 1)
      if((x1 <= 9 && x2 <= 9 && y1 <= 9 && y2 <= 9)) {
         flag = 1;
         break;
      }
   }
   if (flag == 0) cout << -1 << endl;
   else cout << x1 << ' ' << x2 << endl << y1 << ' ' << y2 << endl;
   return 0;
}
