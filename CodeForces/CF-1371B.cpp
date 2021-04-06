
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
  	ll n, r;
  	cin >> n >> r;
  	if (n > r) cout << (r * (r + 1)) / 2 << endl;
  	else {
  		ll num = n - 1;
  		cout << (num * (num + 1))/2 + 1 << endl;
  	}
  }
  
}
