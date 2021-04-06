#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, s, i, sum = 0;
   cin >> n >> s;
   if (n*2 > s) {
      cout << "NO\n";
      return 0;
   }
   cout << "YES\n";
   for (i = 1; i < n; i++) {
      cout << 1 << ' ';
   }
   cout << s - n + 1 << '\n' << n << '\n';
   return 0;
}
