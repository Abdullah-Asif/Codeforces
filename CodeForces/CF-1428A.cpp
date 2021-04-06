
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
  	ll a, b, c, d;
  	cin >> a >> b >> c >> d;
  	ll x = abs(c - a);
  	ll y = abs(d - b);
  	if (x == 0) {
  		cout << y << endl;
  	} 
  	else if (y == 0) {
  		cout << x << endl;
  	}
  	else cout << y + x + 2 << endl;
  }

  return 0;
}
