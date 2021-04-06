
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
  	int n;
  	cin >> n;
  	vector<int> vc(n);
  	for (int i = 0; i < n; i++) {
  		vc[i] = i + 1;
  	}
  	cout << 2 << endl;
  	cout << vc[n-1] << ' ' << vc[n-2] << endl;
  	int mid = (vc[n-1] + vc[n-2] + 1) / 2;
  	for (int i = n - 3; i >= 0; i--) {
  		cout << vc[i] << ' ' << mid << endl;
  		mid = (mid + vc[i] + 1) / 2;
  	}
  }
  return 0;
}
