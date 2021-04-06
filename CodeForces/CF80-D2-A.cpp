#include <bits/stdc++.h>

using namespace std;

int ara[1010];
vector < int > vc;

void seive() {
   int i, j, s = 1000, sq;
   for (i = 2; i < s; i++) {
      ara[i] = 1;
   }
   sq = sqrt(s);
   for (i = 2; i <= sq; i++) {
      if (ara[i] == 1) {
         for (j = i; i * j <= s; j++) {
            ara[i*j] = 0;
         }
      }

   for (i = 2; i < s; i++) {
      if (ara[i] == 1)
         vc.push_back(i);
   }
}

int main()
{
   seive();
   int n, m, i;
   cin >> n >> m;
   for (i = 0; i < n; i++) {
      if (vc[i] == n)
         if (vc[i+1] == m) cout << "YES\n";
         else cout << "NO\n";
   }
   return 0;
}
