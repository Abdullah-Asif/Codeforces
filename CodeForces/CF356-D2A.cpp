#include <bits/stdc++.h>

using namespace std;

int main()
{
//   ios_base ::sync_with_stdio(false);
//   cin.tie(0);
   int n, k, i, num,flag, ncount = 0;
   string str;
   cin >> n >> k;
   while (n--) {
      cin >> str;
      flag = 1;
      str = to_string(num);
      for (i = 0; i < str.size(); i++) {
         if (str[i] > k) {
            flag = 0;
            break;
         }
      }
      if (flag == 1 && str.size() == k + 1) ncount++;
   }
   cout << ncount << "\n";
   return 0;
}
