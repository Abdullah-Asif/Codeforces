#include <bits/stdc++.h>

using namespace std;

int main()
{
   int x, y, i, j, num_count = 0;
   cin >> x >> y;
   for (i = y; i >= 1; i--) {
      for (j = x; j >= 1; j--) {
         if ((i + j) % 5 == 0) {
            num_count++;
         }
      }
   }
   cout << num_count << "\n";
   return 0;
}
