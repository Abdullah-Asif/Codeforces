#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  set<int> s, ss;
  for (int i = 0; i < n; i++) {
  	int num;
  	cin >> num;
  	s.insert(num);
  }
  vector<int> vc;
  set<int> :: iterator it;
  for (it = s.begin(); it != s.end(); it++) {
  	vc.push_back(*it);
  }
  for (int i = 1; i < vc.size(); i++) {
  	ss.insert(vc[i] - vc[i-1]);
  }
  if (ss.size() > 1) cout << -1 << endl;
  else {
  	if (vc.size() > 3) {cout << -1 << endl; return 0;}
  	if (vc.size() == 1) {cout << 0 << endl; return 0;}
  	if (vc.size() == 3) {cout << vc[1] - vc[0] << endl; return 0;}
  	else {
  		int dif = vc[1] - vc[0];
  		if (dif % 2) cout << vc[1] - vc[0] << endl;
  		else cout << dif / 2 << endl;
  	}
  }
  return 0;
}
