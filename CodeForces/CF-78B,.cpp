#include <bits/stdc++.h>

using namespace std;

int main() {
   string str ="ROYGBIV";
   int n, i = 0;
   cin >> n;
   while (n--) {
      cout << str[i];
      i++;
      if (i == 7)
         i = 3;
   }
   cout << endl;
   return 0;
}
