#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

int main() {
  IOS
  int n;
  cin >> n;
  int cnt [100005], A[10];
  memset (cnt, 0, sizeof(cnt));
  memset (A, 0, sizeof(A));
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    cnt[num]++;
    if (cnt[num] == 2 || cnt[num] == 4 || cnt[num] == 6 || cnt[num] == 8)
      A[cnt[num]]++;
  }
  int q, num;
  cin >> q;
  while (q--) {
    char c;
    cin >> c >> num;
    if (c == '+') {
      cnt[num]++;
      if (cnt[num] == 2 || cnt[num] == 4 || cnt[num] == 6 || cnt[num] == 8)
        A[cnt[num]]++;
    }
    else {
      if (cnt[num] == 2 || cnt[num] == 4 || cnt[num] == 6 || cnt[num] == 8) {
        A[cnt[num]]--;
      }
       cnt[num]--;
    }
    if (A[8] || A[4] >= 2 || (A[6] && A[2] >= 2) || (A[4] && A[2] >= 3))
      cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}

