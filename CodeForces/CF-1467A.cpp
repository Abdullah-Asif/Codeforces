#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	IOS
	//freopen("input.txt","r",stdin);
  //("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n;
  	cin >> n;
  	if (n == 1) cout << 9 << endl;
  	else if(n == 2) cout << 98 << endl;
  	else {
  		cout << 989;
  		for (int i = 0; i < n-3; i++) cout << i % 10;
  		cout << endl;
  	}
  }

 	return 0;
}


