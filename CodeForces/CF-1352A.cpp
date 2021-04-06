#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t, i, j, cnt;
   string str;
   cin >> t;
   while (t--) {
      cnt = 0;
      cin >> str;
      for (i = 0; i < str.size(); i++) {
         if (str[i] != '0') cnt++;
      }
      cout << cnt << endl;

      for (i = 0,j = str.size() - 1; i < str.size(); i++, j--) {
         if (str[i] == '0') continue;
         cout << str[i];
         for (int x = 1; x <= j; x++) {
            cout << 0;
         }
         cout << ' ';
      }
      cout << endl;
   }
    return 0;
}
