
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

ll fact(ll n) {
	if (n == 1) return 1;
	return n * fact(n-1);
}

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  if (n == 2) {
  	cout << 1 << endl;
 		return 0;
  }
  ll choose = fact(n) / (fact(n/2) * fact(n / 2));
  choose = choose / 2;
  ll res = fact (n/2 - 1);
  res = res * res;
  res = res * choose;
  cout << res << endl;
  return 0;
}
