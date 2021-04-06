#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int n, k, h;

   cin >> n >> k;
   h = n / 2;

//   if (n %2 == 0) {
//      if (k <= h)
//         cout << k*2 - 1 << endl;
//      else
//         cout << (k-h) * 2 << endl;
//   }
//
//   else {
//      if (k <= h || (k-h) == 1)
//         cout << k*2 - 1 << endl;
//
//      else
//         cout << (k-h) * 2 - 2 << endl;
//
//   }

   if (n % 2 != 0) h++;

   if (k > h) cout << (k-h) * 2 << endl;
   else if (k <= h) cout << (k * 2)- 1 << endl;
   return 0;

}
