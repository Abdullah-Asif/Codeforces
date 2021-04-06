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
  read :
  while (t--) {
  	ll n;
  	cin >> n;
  	ll A[n];
  	ll sum = 0;
  	for (auto &it : A) {
  		cin >> it;
  		sum += it;
  	}
  	ll cnt = 0;
  	for (ll i = 0; i < n - 1; i++) {
  		cnt += A[i];
  		if (cnt >= sum) {
  			cout << "NO" << endl;
  			goto read;
  		}		
  	}
  	cnt = 0;
  	for (ll i = n-1; i > 0; i--) {
  		cnt += A[i];
  		if (cnt >= sum) {
  			cout << "NO" << endl;
  			goto read;
  		}		
  	}
   cout << "YES" << endl;
  }

 	return 0;
}