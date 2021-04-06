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
  	string s;
  	cin >> s;
  	if (s[0] == '<' && s[n-1] == '>') {
  		int c1 = 0, c2 = 0;
  		for (int i = 0; i < n; i++) {
  			if (s[i] == '>') break;
  			c1++;
  		}
  		for (int i = n-1; i >= 0; i--) {
  			if (s[i] == '<') break;
  			c2++;
  		}
  		cout << min (c1, c2) << endl;
  	}
  	else cout << 0 << endl;
  }
  return 0;
}
