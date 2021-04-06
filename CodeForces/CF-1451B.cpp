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
  	int n, q;
  	string s;
 		cin >> n >> q;
  	cin >> s;
  	s = '#'  +s;
  	for (int tt = 1; tt <= q; tt++) {
  		int l, r;
  		cin >> l >> r;
  		bool flag = false;
  		for (int i = 1; i < l; i++) {
  			if (s[i] == s[l]) flag = true;
  		}
  		for (int i = s.size() - 1; i > r; i--) {
  			if (s[i] == s[r]) flag = true;
  		}
  		if (flag) cout << "YES" <<endl;
  		else cout << "NO" << endl;
  	}
  }
  
}
