#include <bits/stdc++.h>
using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
      int num;
      cin >> num;
      mp[num]++;
    }
    int A = 0, B = 0;
    while (mp[A] >= 2)
      A++;
    while (mp[B] >= 1)
      B++;
    cout << A + B << endl;
  }
  return 0;
}
