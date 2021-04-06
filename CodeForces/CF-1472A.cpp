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
  	int w, h, n;
  	cin >> w >> h >> n;
  	int sheet = 1;
  	while (w % 2 == 0) {
  		sheet *= 2;
  		w /= 2;
  	}
  	while (h % 2 == 0) {
  		sheet *= 2;
  		h /= 2;
  	}
  	if (sheet >= n) cout << "YES" << endl;
  	else cout << "NO" << endl;
  }
 	return 0;
}


