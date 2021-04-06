#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, i, k, cnt;
    cin >> t;
    while (t--) {
       cin >> n;
       int ara[n+1];
       for (i = 1; i <= n; i++) {
         cin >> ara[i];
       }
       sort (ara + 1,ara+n+1);
       cnt = 0, k = 0;
       for (i = 1; i <= n; i++) {
         cnt++;
         if (cnt >= ara[i])
            k = i;
       }
       cout << k + 1 << endl;
    }
    return 0;
}
