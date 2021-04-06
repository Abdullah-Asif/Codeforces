#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	IOS
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n;
  	cin >> n;
  	int MXa = 0, MXb = 1e9+7;
  	for (int i = 1; i <= n; i++) {
  		int a, b;
  		cin >> a >> b;
  		MXa = max(MXa, a);
  		MXb = min(MXb, b);
  	}
  	if (MXa <= MXb) cout << 0 << endl;
  	else cout << abs(MXa - MXb) << endl;
  }

 	return 0;
}


