#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
//	freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
  int x, t, a, b, da, db;
  cin >> x >> t >> a >> b >> da >> db;
  vector<int> va, vb;
  va.push_back(0);
  for (int i = 0; i < t; i++) 
  	va.push_back(a - (da * i));
  vb.push_back(0);
  for (int i = 0; i < t; i++) 
  	vb.push_back(b - (db * i));
  bool flag = false;
  for (int i = 0; i < va.size(); i++) {
  	for (int j = 0; j < vb.size(); j++) {
  		if (va[i] + vb[j] == x) {
  			flag = true;
  			break;
  		}
  	}
  }
  if (flag) cout << "YES" << endl;
  else cout << "NO" << endl;
 	return 0;
}