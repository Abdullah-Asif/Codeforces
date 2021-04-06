#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector <string > str;
   char c;
   int i, n, t;
   string str1;

   cin >> t;

   while (t--) {
      cin >> n;
      cin >> str1;

      str.push_back(str1);
      cout << str.size();
      cout << endl;

   }
   return 0;

}
