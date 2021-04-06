#include <bits/stdc++.h>

using namespace std;

int main()
{

   int t, n, a, b, i;
   cin >> t;
   while (t--) {
      cin >> n >> a >> b;
      char c = 'a';
      int cnt = 0;
      for (i = 1; i <= n; i++) {
         cout << c;
         c++;
         cnt++;
         if (cnt == b) cnt = 0, c = 'a';
      }
      cout << endl;
   }
   return 0;
}
