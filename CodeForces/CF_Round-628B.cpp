#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n, t, i, num;
   cin >> n;
   for (i = 1; i <= n; i++) {
      set <int> st;
      cin >> t;
      while (t--) {
         cin >> num;
         st.insert(num);
      }
      cout << st.size() << endl;
   }
   return 0;
}
