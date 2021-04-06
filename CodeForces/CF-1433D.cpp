
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
  	int ara[n];
    int not_same = -1;
  	for (int i = 0; i < n; i++) {
  		cin >> ara[i];
      if (ara[i] != ara[0]) not_same = i;
  	}
    if (not_same == -1) {
      cout << "NO" << endl;
      continue;
    }
    cout << "YES" << endl;
    for (int i =  1; i < n; i++) {
      if (ara[i] != ara[0]) cout << 1 << ' ' << i + 1 << endl;
    }
    for (int i = 1; i < n; i++) {
      if (ara[i] == ara[0]) cout << not_same + 1 << ' ' << i + 1 << endl;
    }
  }
  return 0;
}
