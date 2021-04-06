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
  	ll a, b;
  	cin >> a >> b;
  	if (a == b) cout << 1 << endl;
  	else if (a > b) {
  		if (a % b == 0) cout << 1 << endl;
  		else  cout << 2 << endl;
  	}
  	else {
  		if (b % a == 0) cout << b / a <<endl;
  		else cout << b / a + 1 << endl;
  	}
  }

 	return 0;
}


