#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
	int n, k;
	cin >> n >> k;
	int A[n];
	for (auto &it : A)
		cin >> it;
	sort(A, A + n);
	if (k == 0) {
			if (A[0] == 1) cout << -1 << endl;
			else cout << 1 << endl;
			return 0;
		}
	if (k == n || A[k] != A[k-1])
		cout << A[k-1] << endl;
	else cout << -1 << endl;
}
