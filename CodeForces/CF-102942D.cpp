#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("input.txt", "r" , stdin);
	//freopen("output.txt", "w", stdout);
	
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (a & b) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}