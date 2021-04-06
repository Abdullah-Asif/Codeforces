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
  	int a, b;
  	cin >> a >> b;
  	if (a > b) swap (a, b);
  	cout << (((a + b) % 3 == 0 && a * 2 >= b) ? "YES" : "NO") << endl;
  }
  
}
