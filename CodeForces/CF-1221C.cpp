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
		int c, m, x;
		cin >> c >> m >> x;
		cout << min(c, min(m, (c + m + x)/3)) << endl;
	}
	return 0;  
}
