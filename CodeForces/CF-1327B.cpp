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
  	int n;
  	cin >> n;
  	bool A[n+1];
  	for (int i = 1; i <= n; i++) {
  		A[i] = false;
  	}
  	int tt = n;
  	bool B[n+1];
  	for (int i = 1; i <= n; i++)  B[i] = false;
  	bool flag = false;
  	int kindom, princess;
  	for (tt = 1; tt <= n; tt++) {
  		int sz;
  		cin >> sz;
  		int ara[sz];
  		for (auto &it : ara)
  			cin >> it;
  		sort(ara, ara + sz);
  		for (int i = 0; i < sz; i++) {
	  		if (!A[ara[i]]) {
	  			A[ara[i]] = true;
	  			B[tt] = true;
	  			break;
	  		}
	  	}
  	}
  	for (int i = 1; i <= n; i++) {
  			if (A[i] == false) {
  				flag = true;
  				kindom = i;
  				break;
  			}
  		}
  		for (int i = 1; i <= n; i++) {
  			if (B[i] == false) {
  				princess = i;
  				break;
  			}
  		}
  		if (flag) {
  			cout << "IMPROVE" << endl;
  			cout << princess << ' ' << kindom << endl;
  		}
  		else cout << "OPTIMAL" << endl;
  		
  	}
  }
