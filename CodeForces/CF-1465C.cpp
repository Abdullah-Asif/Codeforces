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
  	int n, m;
  	cin >> n >> m;
  	vector < pair<int, int> > vc(m);
  	bool check[n+1];
  	memset(check, false, sizeof(check));
  	for (int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			vc[i].first = x;
			vc[i].second = y;
			check [y] = true;  		
  	}
  	sort(vc.begin(), vc.end());
  	// for (int i = 1; i <= 5; i++) {
  	// 	cout << check[i] << ' ';
  	// }
  	// cout << endl;
  	int cnt = 0;
  	for (int i = 0; i < m; i++) {
  		if (vc[i].first == vc[i].second) {
  			check[vc[i].first] = false;
  			continue;
  		}
  		else if (vc[i].first != vc[i].second && check[vc[i].first] == true) {
  			cnt += 2;
  			check[vc[i].second] = false;
  			for (int j = i + 1; j < m; j++) {
  				if (vc[i].first == vc[j].second && vc[j].first == false) {
  					cnt--;
  					break;
  				}
  			}
  		}
  		else if (vc[i].first != vc[i].second && check[vc[i].first] == false) {
  			cnt++;
  			check[vc[i].second] = false;
  		}
  		cout << i + 1 << ' ' << cnt << ' ' << endl;

  	}
  	cout << endl;
  	cout << cnt << endl;
  }
 	return 0;
}