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
  	while (n >= 2020 && n % 2021 != 0) n -= 2020;
  	cout << ((n % 2021 == 0) ? "YES" :"NO") << endl;
  }

 	return 0;
}


