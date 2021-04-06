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
  	int a, b, n;
  	cin >> a >> b >> n;
  	int A[n], B[n];
  	for (int &it : A) cin >> it;
  	for (int &it : B) cin >> it;
  	ll attack = 0;
  	int MX  = 0;
  	for (int i = 0; i < n; i++) {
  		ll tmp = (B[i] + a - 1) / a;
  		attack += tmp * A[i];
  		MX = max(MX, A[i]);
  	}
  	if (b - attack + MX> 0) cout << "YES" << endl;
  	else cout << "NO" << endl;
  	
  	
  }

 	return 0;
}


