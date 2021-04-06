	#include <bits/stdc++.h>
	using namespace std;

	#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#define endl "\n"

	typedef long long ll;

	ll nc2(ll n) {
		return n * (n-1)/2;
	}

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
	  	sort(A, A + n);
	  	ll ans = 0, k = 2;
	  	for (int i = 0, j = 0; i < n; i++) {
	  		while (A[i] - A[j] > k) j++;
	  		ans += nc2(i - j);
	  	}
	  	cout << ans << endl;
	  }

	 	return 0;
	}