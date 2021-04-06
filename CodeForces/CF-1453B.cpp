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
  	int A[n];
  	for (auto &it : A)
  		cin >> it;
  	ll ans = 0;
  	for (int i = 1; i < n; i++) {
  		ans += abs(A[i] - A[i-1]);
  	}
  	ll res = ans;
  	res -= abs(A[0] - A[1]);
  	for(int i = 1; i < n; i++) {
  		ll tmp = ans;
  		tmp -= abs(A[i] - A[i-1]);
  		if (i != n -1) {
  			tmp -= abs(A[i] - A[i+1]);
  			tmp += abs(A[i+1] - A[i-1]);
  		}
  		res = min(res, tmp);
  	}
  	cout << res << endl;
  }
 	return 0;
}