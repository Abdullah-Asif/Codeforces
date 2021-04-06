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
  	if (n > 45) {
  		cout << -1 << endl;
  		continue;
  	}
  	string s = "";
  	for (int i = 9; i >= 1; i--) {
  		if (i > n) continue;
  		else {
  			n -= i;
  			char c = i + '0';
  			s += c;
  			if (n == 0) break;
  		}
  	}
  	sort (s.begin(), s.end());
  	cout << s << endl;
  }

 	return 0;
}