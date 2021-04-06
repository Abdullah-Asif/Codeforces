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
 		ll n, m, r, c;
 		cin >> n >> m >> r >> c;
 		ll x = abs(1 - r) + abs(1- c);
 		ll y = abs(1 - r) + abs(m- c);
 		ll z = abs(n - r) + abs(1- c);
 		ll zz = abs(n - r) + abs(m- c);
 		ll mx = max(max(x, y), max(z, zz));
 		cout << mx << endl;
 	}

 	return 0;
}
