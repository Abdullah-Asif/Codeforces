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
  	char s[n+1][m+1];
  	for (int i = 1; i <= n; i++) {
  		for (int j = 1; j <= m; j++) {
  			cin >> s[i][j];
  		}
  	}
  		if (s[i][j] == '*') cnt++;
  	int cnt = 0;
  	for (int i = 1; i <= n; i++) {
  		for (int j = 1; j <= m; j++) {
  		  for (int k = 1; k <= m; k += 2) {
  				
  			}
  		}
  	}
  	cout << cnt << endl; 
  }

 	return 0;
}