#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

void solve() {
	int n;
  cin >> n;
 	int A[n];
 	for (auto &it : A)
 		cin >> it;
  bool flag = false;
  for (int i = 1; i < n; i++) {
  	if (abs(A[i] - A[i-1]) >= 2) {
  		cout << "YES" << endl;
  		cout << i << ' ' << i + 1 << endl;
  		return;
  	}
  }
  cout << "NO" << endl;
}

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	solve();
  }

 	return 0;
}