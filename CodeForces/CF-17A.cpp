#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

const int SZ = 200000;
int ara [200000];

void seive() {
  int i,root,j;       ///vector
  for(i = 2; i < SZ; i++) {
    ara[i] = 1;
  }
  root = sqrt(SZ);
  for(i = 2; i <= root; i++) {
    if(ara[i] == 1) {
      for(j = i; i * j <= SZ; j++) {
          ara[i * j] = 0;
      }
    }
  }
}

int main() {
  IOS
  seive();
  vector <int> vc;
  int i, j, n, k, cnt = 0;
  cin >> n >> k;
  for (i = 2; i <= 10000; i++) {
    if (ara[i] == 1)
      vc.push_back(i);
  }
  i = 0; j = i + 1;
  int x = vc[0] + vc[1] + 1;
  while (x <= n) {
    if (ara[x] == 1) {
      //cout << x << endl;
      cnt++;
    }
    i++;
    j = i + 1;
    x = vc[i] + vc[j] + 1;
  }
  //cout << cnt << endl;
  if (cnt >= k) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}

