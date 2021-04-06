#include <bits/stdc++.h>

using namespace std;

void solve () {
   int n, m, i, j;
     cin >> n >> m;
     int ara[n][m];

     for (i = 0; i  < n; i++) {
       for (j = 0; j < m; j++) {
         cin >> ara[i][j];
       }
     }
     for (i = 0; i  < n; i++) {
       for (j = 0; j < m; j++) {
         int cnt = 0;
         if (i > 0) cnt++;
         if (i + 1 < n) cnt++;
         if (j > 0) cnt++;
         if (j + 1 < m) cnt++;
         if (cnt < ara[i][j]) {
            cout << "NO\n";
            return;
         }
         ara[i][j] = cnt;
       }
     }
     cout << "YES\n";
     for (i = 0; i  < n; i++) {
       for (j = 0; j < m; j++) {
         cout << ara[i][j] << ' ';
       }
       cout << endl;
     }
    cout << endl;
}
int main() {
   int t;
   cin >> t;
   while (t--)
      solve();
   return 0;
}   



