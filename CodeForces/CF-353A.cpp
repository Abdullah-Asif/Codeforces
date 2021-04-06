#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
	int n;
	cin >> n;
	int U[n], L[n];
	for (int i = 0; i < n; i++)
		cin >> U[i] >> L[i];
	int uSum = 0, lSum = 0;
	uSum = accumulate(U, U + n, uSum);
	lSum = accumulate(L, L + n, lSum);
	if (uSum % 2 == 0 && lSum % 2 == 0) cout << 0 << endl;
	else if (uSum % 2 != lSum % 2) cout << -1 << endl;
	else {
		bool flag = false;
		for (int i = 0; i < n; i++) 
			if (U[i] % 2 != L[i]% 2) flag = true;
		if (flag) cout << 1 << endl;
		else cout << -1 << endl;
	}
	return 0;
}
