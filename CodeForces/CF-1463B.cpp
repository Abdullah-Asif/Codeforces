#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	IOS
	//freopen("input.txt","r",stdin);
 	//freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n;
  	cin >> n;
  	int A[n];
  	for (int &it : A) cin >> it;
  	for (int i = 0; i < n; i++) {
  		int j = 0;
  		ll tmp = 1;
  		while(tmp <= A[i]) {
  			tmp *= 2;
  		}
  		tmp /= 2;
  		cout << tmp << ' ';
  	}
  	cout << endl;
  }

 	return 0;
}


