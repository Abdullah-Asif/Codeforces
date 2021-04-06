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
  	int n, q;
  	cin >> n >> q;
  	int A[n];
  	for (int i = 0; i < n; i++) cin >> A[i];
  	ll ans = 0;
  	bool flag = true;
  	for (int i = 1; i < n; i++) {
  		if (flag) {
  			if (A[i] > A[i-1]) continue;
  			else ans += A[i-1], flag = false;
  		}
  		else {
  			if (A[i] < A[i-1]) continue;
  			else ans -= A[i-1], flag = true;
  		}
  	}
  	if (flag) ans+= A[n-1];
  	cout << ans << endl;
  }
  return 0;
}
