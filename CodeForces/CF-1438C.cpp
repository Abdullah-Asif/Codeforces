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
  	ll n, m;
  	cin >> n >> m;
  	for (int i = 0; i < n; i++) {
  		for (int j = 0; j < m; j++) {
  			int x;
  			cin >> x;
  			if ((x % 2) == (i + j) % 2) x++;
  			cout << x << ' ';
  		}
  		cout << endl;
  	}
  }
  return 0;
}
