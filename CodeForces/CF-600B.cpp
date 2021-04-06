#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int n, m;
  cin >> n >> m;
  int A[n];
  for (auto &it : A) cin >> it;
	sort (A, A + n);
	for (int i = 0; i < m; i++) {
		int val;
		cin >> val;
		int res = lower_bound(A, A + n, val + 1) - A;
		cout << res << ' ';
	}

// this one is little bit faster :P

	// for (int i = 0; i < m; i++) {
	// 	int num = B[i];
	// 	ll l = 0, r = n-1;
	// 	while (l <= r) {
	// 		//cout << l << ' ' << r <<  endl;
	// 		ll mid = (l + r) /2;
	// 		if (A[mid] > num) r = mid - 1;
	// 		else l  = mid + 1;
	// 	}
	// 	cout << l << ' ';
	// }
	cout << endl;
 	return 0;
}