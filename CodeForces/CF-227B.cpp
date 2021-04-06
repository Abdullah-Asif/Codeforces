#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int A[100050];

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   LL n, num, m, i, val1 = 0, val2 = 0;
   cin >> n;
   for (i =0; i < n; i++) {
      cin >> num;
      A[num]  = i + 1;
   }
   cin >> m;
   for (i = 0; i < m; i++) {
      cin >> num;
      val1 += A[num];
      val2 += n - A[num] + 1;
   }
   cout << val1 << ' ' << val2 << endl;
   return 0;
}

