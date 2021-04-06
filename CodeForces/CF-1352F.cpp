
#include<bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   int t, n0, n1, n2, i;
   cin >> t;
   while (t--) {
      cin >> n0 >> n1 >> n2;
      if (n1 == 0 && n2 == 0) {
         for (i = 1; i <= n0 + 1; i++) {
            cout << 0;
         }
         cout << endl;
      }
      else if (n0 == 0 && n2 == 0) {
         for (i = 1; i <= n1 + 1; i++) {
            cout << i % 2;
         }
         cout << endl;
      }
      else if (n0 == 0 && n1 == 0) {
         for (i = 1; i <= n2 + 1; i++) {
            cout << 1;
         }
         cout << endl;
      }
      else {
         for (i = 1; i < )
      }
   }

   return 0;
}
