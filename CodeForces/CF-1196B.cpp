#include <bits/stdc++.h>

using namespace std;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int A[n];
		int cnt = 0;
		for (auto &it : A) {
			cin >> it;
			if (it % 2) cnt++;
		}
		if (cnt < k || ((cnt % 2) != (k % 2))) {
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
		for (int i = 0; i < n; i++) {
			if (k == 1) break;
			if (A[i] % 2) {
				cout << i + 1 << ' ';
				k--;
			}
		}
		cout << n << endl;
	}
	return 0;
}