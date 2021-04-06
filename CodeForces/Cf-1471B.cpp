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
  	ll n, x;
  	cin >> n >> x;
		vector <pair <ll, ll> > vc; 	
  	for (int i = 0; i <  n; i++) {
  		int num;
  		cin >> num;
  		vc.push_back({num, 1});
  	} 
  	ll sum = 0;
  	bool flag = false;
  	for (int i = 0; i < vc.size(); i++) {
  		ll a = vc[i].first, b = vc[i].second;
  		sum += (a * b);
  		if (a % x) flag = true;
  		if (flag) continue;
  		vc.push_back({a/ x, b * x});
  	}
 		cout << sum << endl;
  }

 	return 0;
}


