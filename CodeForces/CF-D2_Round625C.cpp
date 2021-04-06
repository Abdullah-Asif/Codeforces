#include <bits/stdc++.h>

using namespace std;

int main()
{
   int  n, i, j, k, ncount = 0;
   char c;
   string str;
   cin >> n;
   cin >> str;

   for (c = 'z'; c >= 'a'; c--) {
     for (j = 0; j < str.size(); j++) {
         if (str[j] != c) continue;
         if (str.size() == 1) break;
         if (j == 0 && str[j+1] == c - 1) {
            str.erase(str.begin() + j);
            ncount++;
            j = - 1;
         }
         else if (j == str.size() - 1 && str[j-1] == c - 1) {
            str.erase(str.begin() + j);
            ncount++;
            j = - 1;
         }
         else if(str[j-1] == c-1 || str[j+1] == c-1) {
            str.erase(str.begin() + j);
            ncount++;
            j = -1;
         }
      }
   }
   cout << ncount << endl;
   return 0;
}
