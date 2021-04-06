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
  	int c, sum;
  	cin >> c >> sum;
  	int rem = sum % c;
  	int d = sum / c;
  	ll res = rem * (d + 1) * (d + 1) + (c - rem) * d * d;
  	cout << res << endl;
  }
}
