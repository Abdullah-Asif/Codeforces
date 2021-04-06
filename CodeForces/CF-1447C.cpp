#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef  long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  read:
  while (t--) {
  	ll n, w;
  	cin >> n >> w;
  	vector <pair <ll, ll> > A(n);
  	for (int i = 0; i < n; i++) {
  		cin >> A[i].first;
  		A[i].second = i + 1;
  	}
  	sort(A.rbegin(), A.rend());
  	ll cnt = 0;
  	vector<ll> vc;
  	for (ll i = 0; i < n; i++) {
  		if ((cnt + A[i].first) > w) continue;
  		else {
  			cnt += A[i].first;
  			vc.push_back(A[i].second);
  			if (cnt >= (w+1)/2 && cnt <= w) {
  				cout << vc.size() << endl;
  				for (auto it : vc)
  					cout << it << ' ';
  				cout << endl;
  				goto read;
  			}
  		}
  	}
  	cout << -1 << endl;
  }
  
}
