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
  read :
  while (t--) {
  	int n;
  	cin >> n;
  	int A[n];
  	for (int &it : A)
  		cin >> it;
  	for (int i = 0; i < n; i++) {
  		if (A[i] % 2 == 0)  {
  			cout << 1 << endl;
  			cout << i + 1 << endl;
  			goto read;
  		}
  		else if (i + 1 < n) {
  			if ((A[i] % 2) && (A[i+1] % 2)) {
  				cout << 2 << endl;
  				cout << i + 1 << ' ' << i + 2 << endl;
  				goto read;
  			}
  		}
  	}
  	cout << -1 << endl;

  }

 	return 0;
}