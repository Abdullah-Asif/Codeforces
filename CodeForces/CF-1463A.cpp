#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	IOS
	//freopen("input.txt","r",stdin);
 // freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int a, b, c;
  	cin >> a >> b >> c;
  	int k = a + b + c;
  	int mn = min({a, b, c});
  	if (k % 9 == 0 && mn >= k/9) cout << "YES" << endl;
  	else cout << "NO" << endl; 
  }

 	return 0;
}


