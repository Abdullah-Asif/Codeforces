#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    ll A[n];
    ll sum = 0;
    for (auto & it : A) {
      cin >> it;
      sum += it;
    }
    sort(A, A + n);
    ll tmp = sum;
    if (tmp % (n-1)) tmp += n - 1 - (sum % (n-1));
    cout << max (tmp, (A[n-1] * (n-1))) - sum << endl;
  }
  return 0;
}
