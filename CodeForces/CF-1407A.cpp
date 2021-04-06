#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int one = 0, zero = 0, ara[n+1];
    for (int i = 1; i <= n; i++) {
      cin >> ara[i];
      if (ara[i] == 0) zero++;
      else one++;
    }
    if (zero >= one) {
        cout << zero << endl;
        for (int i = 1; i <= zero; i++)
          cout << 0 << ' ';
        cout << endl;
     }
      else  {
        if(one % 2) one--;
        cout << one << endl;
        for (int i = 1; i <= one; i++)
          cout << 1 << ' ';
        cout << endl;
      }
  }


  return 0;
}
