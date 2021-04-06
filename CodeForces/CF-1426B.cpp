#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N, M;
    cin >> N >> M;
		bool symmetric = false;
		while (N--) {
			int a, b, c, d;
      cin >> a >> b >> c >> d;
			if (b == c) symmetric = true;
		}
		if (M % 2 == 0 && symmetric)
			cout << "YES" << '\n';
    else
			cout << "NO" << '\n';
	}

	return 0;
}
