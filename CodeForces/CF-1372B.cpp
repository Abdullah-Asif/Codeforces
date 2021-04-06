#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
   IOS
   int t, n, i, div, flag;
   cin >> t;
   while (t--) {
      cin >> n;
      if (n % 2 == 0) {
         cout << (n/2) << ' ' << (n/2) << endl;;
      }
      else {
         flag = 0;
         for(i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
               div = n / i;
               flag = 1;
               break;
            }
         }
         if (flag == 1) cout << div << ' ' << (n - div) << endl;
         else cout << 1 << ' ' << (n-1) << endl;
      }
   }
   return 0;
}

