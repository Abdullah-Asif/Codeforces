
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
  	int i, n, k;
  	cin >> n >> k;
  	vector<int> vc(n);
  	for (auto &it : vc)
  		cin >> it;
  	sort (vc.rbegin(), vc.rend());
  	 ll sum = 0;
  	for (i = 0; i < k; i++) {
  		sum += vc[i];
  	}
  	sum += vc[i];
  	cout << sum << endl;
  }

  return 0;
}
