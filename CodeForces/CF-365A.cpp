#include <bits/stdc++.h>

using namespace std;

int main()
{
   int i, n, k, good = 0;
   char c;
   string str;
   cin >> n >> k;
   while (n--) {
      cin >> str;
      set < char > s;
      c = '0' + k;
      for (i = 0; i < str.length(); i++) {
         if (str[i] <= c)
            s.insert(str[i]);
      }
      if (s.size() >= k+1) good++;
   }
   cout << good << endl;
   return 0;
}
