#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n, m;
  cin >> n >> m;
  if (n == 1) {
  	cout << 0 << endl;
  	return 0;
  }
  vector<int> x(m), y(m);
  for (int i = 0; i < m; i++) {
  	cin >> x[i] >> y[i];
  }
  int ans;
  for (int i = 1; i <=n; i++) {
  	bool flag = true;
  	for (int j = 0; j < m; j++) {
  		if (i == x[j] || i == y[j]) {
  			flag = false;
  			break;
  		}
  	}
  	if (flag) {
  		ans = i;
  		break;
  	}
  }
  cout << n - 1 << endl;
  for (int i = 1; i <= n; i++) {
  	if (ans == i) continue;
  	else cout << ans << ' ' << i << endl;
  }
 	return 0;
}