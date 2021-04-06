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
  	int a, b;
  	cin >> a >> b;
  	string s;
  	cin >> s;
  	int res = 0, cost, zero, MN = 1e9;
  	bool flag = true;
  	for (int i = 0; i < s.size(); i++) {
  		if (s[i] == '1') {
  			flag = false;
  			cost = a;
  			for (int j = i + 1; j < s.size(); j++) {
		  		if (s[j] == '1' && s[j-1] == '1') continue;
		  		else if (s[j] == '1') {
		  			int tmp = cost + (zero * b);
		  			cost = cost + a;
		  			cost = min(tmp, cost);
		  		}
		  		else if (s[j] == '0') {
		  			zero = 1;
		  			int k = j + 1;
		  			while (k < s.size() && s[k] == '0') {
		  				zero++;
		  				k++;
		  			}
		  			j = k -1;
		  		}
		  	}
		  	break;
  		}
  		
  	}if (flag) cout << 0 << endl;
  	else cout << cost << endl;
  }
  
}
