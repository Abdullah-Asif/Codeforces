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
  	int num, res;
  	int flag = 0;
  	for (int i = 2; i * i <= n; i++) {
  		if (n % i == 0) {
  			flag = 1;
  			break;
  		}
  	}
  	if (flag == 1) { 
  		for (int i = 0; i < n; i++) {
  			for (int j = 0; j < n; j++) {
  				 if (j - i == 1) cout << 1 << ' ';
  				else if (i == n-1 && j == 0) cout << 1 << ' ';
  				else if (i == j) cout << 1 << ' ';
  				else cout << 0 << ' ';
  			}
  			cout << endl;
  		}
  		cout << endl;
  	}
  	else {
  		for (int i = 0; i < n; i++) {
  			for (int j = 0; j < n; j++) {
  				cout << 1 << ' ';
  			}
  			cout << endl;
  		}
  	}
  }
  return 0;
}
