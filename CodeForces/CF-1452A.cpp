#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int a, b;
  	cin >> a >> b;
  	if (a == b) cout << a + b << endl;
  	else {
  		int x = max(a, b);
  		cout << x * 2 - 1 << endl;
  	}
  }
  
}
