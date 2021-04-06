#include <bits/stdc++.h>
using namespace std;

int main(){
   int cnt = 0,cnt1 = 0, cnt2 = 0, i, j, flag = 0;
   string str[4];
   for (i = 0; i < 4; i++) {
      cin >> str[i];
   }
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         cnt = 0;
         if (str[i][j] == str[i][j+1] && ((str[i][j] == str[i+1][j]) || (str[i][j] == str[i+1][j+1]))) {
            flag = 1;
            break;
         }
         else if ((str[i][j] == str[i+1][j] && str[i][j] == str[i+1][j+1]) || (str[i][j+1] == str[i+1][j+1] && str[i][j+1] == str[i+1][j])) {
            flag = 1;
            break;
         }
      }
   }
   if (flag == 1 ) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}
