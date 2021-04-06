#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t, i, j;
   cin >> t;
   while (t--) {
      string s[10];
      for (i = 0; i < 9; i++) {
         cin >> s[i];
      }
      for (i = 0; i < 9; i++) {
         for (j = 0; j < 9; j++) {
            if (s[i][j] == '1') s[i][j] = '2';
         }
         cout << s[i] << "\n";
      }
   }
   return 0;
}
