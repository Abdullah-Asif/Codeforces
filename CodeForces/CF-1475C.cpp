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
  	int a, b, k;
  	cin >> a >> b >> k;
  	vector<int> A(k), B(k);
  	map<int, int> X, Y;
  	for (int &it : A) cin >> it;
  	for (int &it : B) cin >> it;
  	for (int i = 0; i < k; i++) {
  		X[A[i]]++;
  		Y[B[i]]++;
  	}
  	ll res = 0;
  	for (int i = 0; i < k; i++) {
  		res += (k-1) - (X[A[i]] - 1) - (Y[B[i]] -1);
  	}
  	cout << res / 2 << endl;
	}

 	return 0;
}


