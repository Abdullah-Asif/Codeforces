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
  	int A[n];
  	ll sum = 0, res = 0;
  	bool f = false;
  	for (int &it : A) {
  		cin >> it;
  		res += (it + x - 1) / x;
  		sum += it;
  	}
  	cout << (sum + x - 1) / x << ' ' << res << endl;

  }

 	return 0;
}


