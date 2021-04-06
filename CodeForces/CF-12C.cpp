#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
 	int n, m;
 	cin >> n >> m;
 	vector<int> vc(n), V;
 	for (int i = 0; i < n; i++) {
 		cin >> vc[i];
 	}
 	map<string, int> mp;
  for (int i = 0; i < m; i++) {
  	string s;
  	cin >> s;
  	mp[s]++;
  }
  for (auto it : mp) {
  	V.push_back(it.second);
  }
  sort(V.rbegin(), V.rend());
  sort(vc.begin(), vc.end());
  int minAmount = 0, maxAmount = 0;
  for (int i = 0; i < V.size(); i++) {
  	minAmount += (V[i] * vc[i]);
  }
  sort(vc.rbegin(), vc.rend());
  for (int i = 0; i < V.size(); i++) {
  	maxAmount += (V[i] * vc[i]);
  }
  cout << minAmount << ' ' << maxAmount << endl;



 	return 0;
}