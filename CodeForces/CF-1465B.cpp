#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

bool check(ll n) {
	ll x = n;
	while (x) {
		int r = x % 10;
		if (r && n % r) return 0;
		 x /= 10;
	}
	return 1;
}


int main() {
	IOS
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	ll n;
  	cin >> n;
  	while (!check(n)) n++;
  	cout << n << endl;
  }	

 	return 0;
}