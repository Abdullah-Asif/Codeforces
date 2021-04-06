#include <bits/stdc++.h>

using namespace std;

int main() {
   int t, i, j, n, num;
   cin >> t;
   while (t--) {
      cin >> n;
      vector <int> odd,even;
      for (i = 0; i < n * 2; i++) {
         cin >> num;
         if (num % 2 == 1)
            odd.push_back(i+1);
         else
            even.push_back(i+1);
      }
      for (i = 0; i < n-1; i++) {
         if (odd.size() > 1) {
            cout << odd.back() << ' ';
            odd.pop_back();
            cout << odd.back() << endl;
            odd.pop_back();
         }
         else {
            cout << even.back() << ' ';
            even.pop_back();
            cout << even.back() << endl;
            even.pop_back();
         }
      }
   }
   return 0;
}

