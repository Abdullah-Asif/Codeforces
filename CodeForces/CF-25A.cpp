#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  int odd = 0, even = 0, o, e;
  for (int i = 0; i < n; i++) {
  	int num;
  	cin >> num;
  	if (num % 2) {
  		odd++;
  		o = i + 1;
  	}
  	else {
  		even++;
  		e = i + 1;
  	}
  }
  if (odd > even) cout << e << endl;
  else cout << o << endl;
 	return 0;
}