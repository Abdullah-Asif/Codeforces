#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n, i, m, ans = 0;
   cin >> n >> m;
   for (i = 1; i <= n; i++) {
      ans += (i + m)/ 5 - i / 5;
   }
   cout << ans << endl;
   return 0;
}
