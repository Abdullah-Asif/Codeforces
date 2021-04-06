#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	IOS
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n, m;
  	cin >> n >> m;
  	vector<int> A(n), Cost(m);
  	for (int &it : A) cin >> it;
  	for (int &it : Cost) cin >> it;
  	sort (A.rbegin(), A.rend());
  	int j = 0;
  	ll res = 0;
  	for (int i = 0; i < n; i++) {
  		if (j < m) {
	  		if (Cost[j] < Cost[A[i]-1]) {
	  			res += Cost[j];
	  			j++;
	  		}
	  		else res += Cost[A[i]-1];
	  	}
  		else res += Cost[A[i]-1];
  	}
  	cout << res << endl;
  }

 	return 0;
}


