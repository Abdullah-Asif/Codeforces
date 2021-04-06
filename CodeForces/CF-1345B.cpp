#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   long long int t, n, i;
   cin >> t;
   while (t--) {
      cin >> n;
      long long int total_cards, cnt = 0;
      for (i = 30000; i > 0; i--) {
         total_cards = i * (i + 1) + (((i - 1) * i) / 2);
         while (total_cards <= n) {
            cnt++;
            n -= total_cards;
         }
         //cout << total_cards << endl;
      }
      cout << cnt << endl;
   }
   return 0;
}
