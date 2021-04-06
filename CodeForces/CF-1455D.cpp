#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

bool notSorted(vector<int> &vc) {
	for (int i = 1; i < vc.size(); i++) {
		if(vc[i] < vc[i-1]) return true;
	}
	return false;
}

void solve() {	
	 int n, x;
	 cin >> n >> x;
	 vector<int> vc(n);
	 for (int &it : vc) cin >> it;
	 int cnt = 0;
	 while (notSorted(vc)) {
	  cnt++;
	  int i = 0;
	  while (i < n && vc[i] <= x) i++;
	  if (i == n) {
	  	cout << -1 << endl;
	  	return;
	  }
	  swap(vc[i], x);
	 }
	 cout << cnt << endl;
}

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
	  solve();
	 }
 	return 0;
}