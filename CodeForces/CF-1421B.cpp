
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
  	char s[n+1][n+1];
  	for (int i = 1; i <= n; i++) {
  		for (int j = 1; j <= n; j++)  {
  			cin >> s[i][j];
  		}
  	}
  	if (s[1][2] == s[2][1] && s[n][n-1] == 	s[n-1][n]) {
  		if (s[1][2] == s[n][n-1]) {
  			cout << 2 << endl;
  			cout << "1 2" << endl;
  			cout << "2 1" << endl;
  		}
  		else if (s[1][2] != s[n][n-1]) {
  			cout << 0 << endl;
  		}
  	}
  	else if (s[1][2] != s[2][1] && s[n][n-1] != s[n-1][n]) {
  		cout << 2 << endl;
  		if (s[1][2] == '0') cout << "1 2" << endl;
  		else cout << "2 1" << endl;
 			if (s[n][n-1] == '1') cout << n << ' ' << n-1 << endl;
 			else cout << n-1 << ' ' << n << endl;
 		}
  	else if ((s[1][2] == s[2][1] && s[n][n-1] != s[n-1][n]) || (s[1][2] != s[2][1] && s[n][n-1] == s[n-1][n])) {
  		if (s[1][2] == s[2][1]){
  			if (s[1][2] == '0') {
  				cout << 1 << endl;
  				if (s[n][n-1] == '0') cout << n << ' ' << n-1 << endl;
  				else cout << n-1 << ' ' << n << endl;
  			}
  			else {
  				cout << 1 << endl;
  				if (s[n][n-1] == '1') cout << n << ' ' << n-1 << endl;
  				else cout << n-1 << ' ' << n << endl;
  			}
  		}
  		else {
  			if (s[n][n-1] == '0') {
  				cout << 1 << endl;
  				if (s[1][2] == '0') cout << "1 2" << endl;
  				else cout << "2 1" << endl;
  			}
  			else {
  				cout << 1 << endl;
  				if (s[1][2] == '1') cout << "1 2" << endl;
  				else cout << "2 1" << endl;
  			}
  		}
  	}
  }
  return 0;
}
