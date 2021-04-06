#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int t, x, y, a, b, ans ;
   cin >> t;
   while (t--) {
        cin >> x >> y >> a >> b;
        ans=abs(x-y)*a+(min(x,y))*b;
        ans=min(ans,(x+y)*a);
        cout << ans << endl;
   }
   return 0;
}
