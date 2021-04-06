
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
  	if (n < 3 || n == 4) {
  		cout << - 1 << endl;
  	}
  	else if (n % 3 == 0) {
  		cout << n /3 << ' ' << 0 << ' ' << 0 << endl;
  	}
  	else if ((n -5) % 3 == 0) {
  		cout << (n-5)/3 << ' ' << 1 << ' ' << 0 << endl;
  	}
  	else {
  		cout << (n-7)/3 << ' ' << 0 << ' ' << 1 << endl;
  		continue;
  	}
  }
  return 0;
}
