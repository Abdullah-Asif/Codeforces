#include <bits/stdc++.h>
using namespace std;

int A[100050];

int main()
{

   int a, b, n, i;
   cin >> n;
   a = n;

   for (i = 0; i < n; i++) {
      cin >> b;
      A[b] = 1;
      while (A[a] == 1) {
         cout << a << ' ';
         a--;
      }
      cout << endl;
   }

   return 0;

}
