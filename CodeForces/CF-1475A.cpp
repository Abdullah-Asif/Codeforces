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
  	ll n;
  	cin >> n;
  	int p = __builtin_popcountll(n);
  	cout << (p == 1 ? "NO" : "YES") << endl;
  }
 	return 0;
}


