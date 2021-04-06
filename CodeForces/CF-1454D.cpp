#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef unsigned long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	ll n;
  	cin >> n;
  	ll N = n;
  	ll num, cnt = 1;
  	for (ll i = 2; i * i <= n; i++) {
  		ll tmp = 0;
  		if (n % i == 0) {
	  		while ((n % i == 0)) n /= i, tmp++; 
	  		if (tmp > cnt) {
	  			cnt = tmp;
	  			num = i;
	  		}
  		}
  	}
  	cout << cnt << endl;
  	for (ll i = 1; i < cnt; i++) {
  		cout << num << ' ';
  		N /= num;
  	}
  	cout << N << endl;
  }
  
}
