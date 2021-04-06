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
  	ll d, k;
  	cin >> d >> k;
  	ll x = 0, y = 0;
  	while (true) {
  		if (x <= y && (x + k)* (x + k) + y * y <= d * d)
  			x += k;
  		else if (x > y && (y + k)* (y + k) + x * x <= d * d)
  			y += k;
  		else break;
  	}
  	if (x == y) cout << "Utkarsh" << endl;
  	else cout << "Ashish" << endl;
  }
  return 0;
}
