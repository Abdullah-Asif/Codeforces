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
 		int n;
 		cin >> n;
 		if (n == 1) cout << 0 << endl;
 		else if (n == 2) cout << 1 << endl;
 		else if (n == 3 ) cout << 2 << endl;
 		else if (n % 2 == 0) cout << 2 << endl;
 		else cout << 3 << endl;
 	}
  
}
