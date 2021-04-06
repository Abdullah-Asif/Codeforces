#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, t, k , d, i, c = 0,c1 = 0, j;

    cin >> n >> t >> k >> d;

    if (n <= k) printf("NO\n");

    else {
        for (i =  t; ; i = i + t) {
            c = c+k;
            if (c >= n) break;
        }
        c1 = d / t;
        c1 =  c1 * k;
        for (j = t + d; ;  j = j+t) {
            c1 = c1 + (2 * k);
            if (c1 >= n) break;
        }
        if (j < i) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
