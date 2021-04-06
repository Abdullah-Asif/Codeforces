#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef  unsigned long long ll;

int main() {
	IOS
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	ll p, a, b, c;
  	cin >> p >> a >> b >> c;
  	if (p % a == 0 || p % b == 0 || p % c == 0) cout << 0 << endl;
  	else {
  		cout << min((a - (p % a)), min(b - (p % b), c - (p % c))) << endl;
  	}

  }

 	return 0;
}


