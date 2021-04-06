
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  string s;
  int n, j = 1, k, in;
  cin >> s >> n;
  	for (int i = 0; i < s.size() && n > 0; i++) {
  		char MX = s[i];
  		for (j = i + 1, k = 1; j < s.size() && k <= n; j++, k++) {
  			if (s[j] > MX) {
  				MX = s[j];
  				in = j;
  			}
  		}
  		if (MX == s[i]) continue;
  		else {
  			int dlt = in - i;
  			for (j = in; j >= i; j--) {
  				s[j] = s[j-1];
  			}
  			s[i] = MX;
  			n -= dlt;
  		}
  	}
  cout << s << endl;

  return 0;
}
