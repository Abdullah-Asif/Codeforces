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
  	ll p, q;
  	cin >> p >> q;
  	ll Q = q, PP;
  	set <ll> s;
  	for (ll i = 2; i * i <= Q; i++) {
  		while (Q % i == 0) {
  			s.insert(i); 
  		 	Q /= i;
  		}
  	}
  	if (Q > 1) s.insert(Q); 
		ll res = 0;  	
  	for (auto it : s) {
  		PP = p;
  		while (PP % q == 0) PP /= it;
  		res = max(res, PP);
  	}
  	cout << res << endl;
  }
  return 0;
}




// #include <bits/stdc++.h>
// using namespace std;
 
// using ll = long long;
// void solve(){
// 	ll p, q;
// 	cin >> p >> q;
// 	ll best = 0;
// 	set<ll> pf;
// 	ll cq = q;
// 	for(ll r = 2; r * r <= cq; r++){
// 		while(cq % r == 0){
// 			pf.insert(r);
// 			cq /= r;
// 		}
// 	}
// 	if(cq > 1) pf.insert(cq);
// 	for (auto it : pf)
// 		cout << it << ' ';
// 	cout << endl;

// 	for(ll r : pf){
// 		ll cp = p;
// 		while(cp % q == 0) {
// 			cp /= r;
// 			cout << cp << endl;
// 		}
// 		best = max(best, cp);
// 	}
// 	cout <<'\n' << best << '\n';
// }
 
// int main(){
// 	freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);
// 	ios_base::sync_with_stdio(false), cin.tie(nullptr);
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// }