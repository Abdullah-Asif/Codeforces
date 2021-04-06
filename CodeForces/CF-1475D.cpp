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
  	int n, m;
  	cin >> n >> m;
  	vector<int> A(n), X, Y;
  	ll sum = 0;
  	for (int &it : A) {
  		cin >> it;
  		sum += it;
  	}
  	for (int i = 0; i < n; i++) {
  		int it;
  		cin >> it;
  		if (it == 1) X.push_back(A[i]);
  		else Y.push_back(A[i]);
  	}
  	if (sum < m) {
  		cout << -1 << endl;
  		continue;
  	}
  	sort(X.rbegin(), X.rend());
  	sort(Y.rbegin(), Y.rend());
  	sum = 0;
  	int ans = 1e9;
  	for (int i = 0; i <Y.size(); i++) sum += Y[i];
  	//cout << sum << endl;
  	int j = 0, s1 = X.size(), s2 = Y.size();
  	for (int i = s2; i >= 0; i--) {
  		while (j < s1 && sum < m) {
  			sum += X[j];
  			j++; 
  		}
  		if (sum >= m) {
  			ans = min(ans, 2 * i + j); 
  		}
  		if (i > 0) sum -= Y[i-1];
  	}
  	cout << ans << endl;
  }

 	return 0;
}


