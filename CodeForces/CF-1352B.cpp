
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t, n, k, i;
   cin >> t;
   while (t--) {
      cin >> n >> k;
      if ((n % 2 == 1 && k % 2 == 0) || k > n || (n % 2 == 0 && k % 2 == 1 &&  k * 2 > n)) cout << "NO\n";

      else {
            cout << "YES\n";
            if (n % k == 0) {
               for (i = 1; i <= k; i++) {
                  cout << n / k << ' ';
               }
               cout << endl;
            }
            else if (n % 2 == 0) {
               for (i = 1; i <= k - 1; i++) {
                  cout << 2 << ' ';
               }
               cout << n - (k-1)* 2;
               cout << endl;
            }
            else if (n % 2 == 1) {
               for (i = 1; i <= k - 1; i++) {
                  cout << 1 << ' ';
               }
               cout << n - (k-1) * 1;
               cout << endl;
            }
         }
   }
   return 0;
}
