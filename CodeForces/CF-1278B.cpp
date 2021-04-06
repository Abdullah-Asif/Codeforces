#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;
bool ok(ll res, ll d) {
	ll sum = (res * (res + 1))/2;
	if (sum < d) return false;
	return (sum % 2 == d % 2);
}

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  read :
  while (t--) {
  	ll a, b;
  	cin >> a >> b;
  	if (abs(a-b) == 0) {
  		cout << 0 << endl;
  		continue;
  	}
  	ll res = 1;
  	ll d = abs(a-b);
  	while (!ok(res, d)) ++res;
  	cout << res << endl;
  }

 	return 0;
}