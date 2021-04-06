#include<bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   int t, n, k, i, j, res;
   cin >> t;
   while (t--) {
      cin >> n >> k;
      int flag = 0;
      if (n % 2 == 0) {
         n += 2;
         cout << n + (k-1)* 2 << endl;
      }
      else {
         for (i  = 3; i <= n; i++) {
            if (n % i == 0) {
               break;
            }
         }
         n += i;
         cout << n + (k-1) * 2 << endl;
      }
   }
   return 0;
}

