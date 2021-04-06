#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n, x;
  	cin >> n >> x;
  	int A[n], B[n];
  	for (auto &it : A)
  		cin >> it;
  	for (auto &it : B)
  		cin >> it;
  	sort(A, A + n, greater<int>());
  	sort(B, B + n);
  	bool flag = false;
  	for (int i = 0; i < n; i++) {
  		if ((A[i] + B[i]) > x) flag = true;
  	}
  	if (flag) cout << "NO" << endl;
  	else cout << "YES" <<  endl;
  }
  
}
