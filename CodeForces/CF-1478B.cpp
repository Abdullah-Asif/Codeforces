#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;
bool check (int num, int d) {
	while (num > 0) {
		if (num % 10 == d) {
			return true;
		}
		num /= 10;
	}
	return false;
}

void solve () {
		int q, d;
		cin >> q >> d;
		int A[q];
		for (int &it : A) cin >> it;
		for (int i = 0; i < q; i++) {
			bool f = false;
			if (A[i] % d == 0) cout << "YES" << endl;
			else {
				while (A[i] > 0) {
					if(check(A[i], d)) {
						f = true;
						break;
					}
					A[i] -= d;
				}
				if (f) cout << "YES" << endl;
				else cout << "NO" << endl;
			}			
		}  	
}

int main() {
	IOS
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	solve();
  }

 	return 0;
}


