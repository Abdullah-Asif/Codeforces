#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

void solve () {
	int n;
		cin >> n;
		int A[n];
		for (int &it : A) cin >> it;
		bool check[n + 1];
		for (int i = 1; i <= n; i++) check[i] = false;  	
		int j = 1;
		bool flag = false;
		vector<int> vc;
		for (int i = 0; i < n; i++) {
			if (check[A[i]] == true && check[j] == false && j > A[i]) {
				flag = true;
				break;
			}
			else if (check[A[i]] == false) {
				check[A[i]] = true;
				if (A[i] == j) j++;
				vc.push_back(A[i]);
			}
			else if (check[A[i]] == true && check[j] == false && j <= A[i]) {
				vc.push_back(j);
				check[j] = true;
				while (check[j] == true) j++;
			}
		}
		if (flag) cout << -1;
		else for (int it : vc) cout << it << ' ';
		cout << endl;
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


