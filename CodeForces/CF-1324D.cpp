#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  int n, i, j;
  cin >> n;
  int A[n], B[n], C[n];
  for (auto &it : A)
    cin >> it;
  for (auto &it : B)
    cin >> it;
  long long cnt = 0;
  for (i = 0; i < n; i++) {
    C[i] = A[i]- B[i];
  }
  sort (C, C + n);
  for (i = n - 1, j = 0; i >= 0; i--) {
    while (j < i && (C[i] + C[j]) <= 0)
      j++;
    cnt += max(i - j, 0);
  }
  cout << cnt << endl;
  return 0;
}

