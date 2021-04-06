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
  	char s[n][m];
  	for (int i = 0; i < n; i++) {
  		for (int j = 0; j < m; j++) {
  			cin >> s[i][j];
  		}
  	}
  	int cnt = 0; 
  	vector <int> vc;
  	for (int i = 0; i < n; i++) {
  		for (int j = 0; j < m; j++) {
  			if (s[i][j] == '1' && (j + 1 < m && s[i][j+1] == '1') && (i + 1 < n && s[i+1][j] == '1')){
  				cnt++;
  				s[i][j] = '0';
  				s[i][j+1] = '0';
  				s[i+1][j] = '0';
  				vc.push_back(i+1);
  				vc.push_back(j+1);
  				vc.push_back(i+1);
  				vc.push_back(j+2);
  				vc.push_back(i+2);
  				vc.push_back(j+1);
  			}
  			else if (s[i][j] == '1' && (j + 1 < m && s[i][j+1] == '1') && (i + 1 < n && j+1 < n &&  s[i+1][j+1] == '1')){
  				cnt++;
  				s[i][j] = '0';
  				s[i][j+1] = '0';
  				s[i+1][j+1] = '0';
  				vc.push_back(i+1);
  				vc.push_back(j+1);
  				vc.push_back(i+1);
  				vc.push_back(j+2);
  				vc.push_back(i+2);
  				vc.push_back(j+2);
  			}
  			else if (s[i][j] == '1' && (i + 1 < n && s[i+1][j] == '1') && (i + 1 < n && j+1 < n &&  s[i+1][j+1] == '1')){
  				cnt++;
  				s[i][j] = '0';
  				s[i+1][j] = '0';
  				s[i+1][j+1] = '0';
  				vc.push_back(i+1);
  				vc.push_back(j+1);
  				vc.push_back(i+2);
  				vc.push_back(j+1);
  				vc.push_back(i+2);
  				vc.push_back(j+2);
  			}
  			else if (s[i][j] == '1' && (i + 1 < n && s[i+1][j] == '1') && (i + 1 < n && j-1 >= 0 &&  s[i+1][j-1] == '1')){
  				cnt++;
  				s[i][j] = '0';
  				s[i+1][j] = '0';
  				s[i+1][j-1] = '0';
  				vc.push_back(i+1);
  				vc.push_back(j+1);
  				vc.push_back(i+2);
  				vc.push_back(j+1);
  				vc.push_back(i+2);
  				vc.push_back(j);
  			}
  		}
  	}
  	cout << cnt << endl;
  	int b = 0;
  	for (int i = 0; i < vc.size(); i++) {
  		cout << vc[i] << ' ';
  		b++;
  		if (b == 6) {
  			cout << endl;
  			b = 0;
  		}
  	}
  }
}
