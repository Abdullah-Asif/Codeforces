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
  	int c1 = 0, sum = 0;
  	for (int i = 1; i <= n; i++) {
  		int num;
  		cin >> num;
  		sum += num;
  		if (num == 1) c1++;
  	}
  	if (sum % 2 == 1) cout << "NO" << endl;
  	else if ((sum/2) % 2 == 1 && c1 == 0) cout << "NO" << endl;
  	else cout << "YES" << endl;
  }

 	return 0;
}


