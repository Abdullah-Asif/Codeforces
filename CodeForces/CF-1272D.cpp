#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  int A[n];
  for (auto &it : A)
    cin >> it;
  vector<int> l(n), r(n);
  for (int i = 0; i < n; i++) {
    l[i] = (i > 0 && A[i] > A[i-1]) ? l[i-1] + 1 : 1;
  }
  for (int i = n-1; i >= 0; i--) {
    r[i] = (i < n-1 && A[i] < A[i+1]) ? r[i+1] + 1 : 1;
  }
  int ans = *max_element(l.begin(), l.end());
  for (int i = 1; i < n-1; i++) {
    if (A[i-1] < A[i+1])  ans = max(ans, l[i-1] + r[i+1]);
  }
  cout << ans << endl;
}
