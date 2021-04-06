#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

bool good (ll x) {
	for (ll i = 1; i * i <= x; i++) {
		if (x % i  == 0) {
			if (i != 1 && (int)sqrt(i) == sqrt(i)) return 0;
			if ((x/i) != 1 && (int)sqrt(x/i) == sqrt(x/i)) return 0;
		}
	}
	return 1;
}
   
int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  ll num;
  cin >> num;
  vector <ll> vc;
  for (ll i = 1; i * i <= num; i++) {
  	if (num % i == 0) {
  		vc.push_back(i);
  		if ((i * i )!= num) vc.push_back(num/i);
  	}
  }
  sort(vc.rbegin(), vc.rend());
  for (ll i = 0; i < vc.size(); i++) {
  	if (good (vc[i])) {
  		cout << vc[i] << endl;
  		return 0;
  	}
  }
 	return 0;
}