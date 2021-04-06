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
  	int n, k;
  	cin >> n >> k;
  	ll A[n];
  	ll preSum[n];
  	for (int i = 0; i < n; i++) {
  		cin >> A[i];
  		preSum[i] = A[i];
  	}
  	preSum[0] = A[0];
  	for (int i = 1; i < n; i++) {
  		preSum[i] = preSum[i] + preSum[i-1];
  	}
  	ll inc = 0;
  	for (int i = n-1; i > 0; i--) {
  		ll tmp = k * (preSum[i-1] + inc);
  		if (100 * A[i] < tmp) continue;
  		else {
  			ll x = (100 * A[i] - (preSum[i-1] + inc) * k + k-1) / k;
  			inc += x;
  		}
  	}
  	cout << inc << endl;	 

  }

 	return 0;
}


