#include <bits/stdc++.h>

using namespace std;

int main() {
   int t, n, m, i, j, mn;
   cin >> t;
   while (t--) {
      cin >> n >> m;
      set <int> row, col;
      for (i = 0; i < n; i++) {
         for (j = 0; j < m; j++) {
            int x;
            cin >> x;
            if (x == 1) {
               row.insert(i);
               col.insert(j);
            }
         }
      }
      mn = min (n - row.size(), m - col.size());
      if (mn % 2 == 0) cout << "Vivek\n";
      else cout << "Ashish\n";
   }
   return 0;
}






//
//int main() {
//   int t, n , m, i, j;
//   cin >> t;
//   while (t--) {
//      cin >> n >> m;
//      int A[n][m], x, y, k = 0, flag = 1;
//      for (i = 0; i < n; i++) {
//         for (j = 0; j < m; j++) {
//            cin >> A[i][j];
//         }
//      }
//      for (i = 0; i < n; i++) {
//         for (j = i; j < m; j++) {
//            if (A[i][j] == 0){
//               x = i, y = j;
//               for (j = 0; j < m; j++) {
//                  if (A[i][j] == 1) {
//                     flag = 0;
//                     break;
//                  }
//               }
//               j = y;
//               for (i = 0; i < n; i++) {
//                  if (A[i][j] == 1) {
//                     flag = 0;
//                     break;
//                  }
//               }
//               if (flag == 1) {
//                  A[x][y] = 1;
//                  i = x;
//                  k++;
//               }
//               break;
//            }
//            else break;
//         }
//      }
//      cout << "K = " << k << endl;
//      if (k %2 == 0) cout << "Vivek\n";
//      else cout << "Ashish\n";
//   }
//   return 0;
//}
//
