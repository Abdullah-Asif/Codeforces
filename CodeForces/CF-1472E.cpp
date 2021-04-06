#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n;
  	cin >> n;
  	vector<tuple <int, int, int, int> > v(n+1);
  	for (int i = 1; i <= n; i++) {
  		int a, b;
  		cin >> a >> b;
  		v[i] = (make_tuple(a, b, i, i));
  	}
  	sort(v.begin(), v.end());
  	// for (int i = 1; i <= n; i++) {
  	// 	cout << get<0> (v[i]) << ' ' << get<1> (v[i]) << ' ' << get<2> (v[i]) << ' ' << get<3> (v[i]) << endl;
  	// }
  	vector< int> index(n + 1, -1);
  	for (int i = 2; i <= n; i++) {
  		bool f = false;
  		if (get<0> (v[i]) > get<0> (v[i-1]) && get<1> (v[i]) > get<1> (v[i-1])) {
  			index[get<3> (v[i])] = get<3> (v[i-1]);
  			f = true;
  		}
  		else if (get<0> (v[i]) > get<1> (v[i-1]) && get<1> (v[i]) > get<0> (v[i-1])) {
  			index[get<3> (v[i])] = get<3> (v[i-1]);
  			f = true;
  		}
  		if (f == false && index[get<3> (v[i-1])] != -1) index[get<3> (v[i])] = index[get<3> (v[i-1])];
  	}
  	//sort(index.begin(), index.end());
  	for (int i = 1; i <= n; i++) {
  		cout << index[i] << ' ';
  	}
  	cout << endl;
  }

 	return 0;
}


