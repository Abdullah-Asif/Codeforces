#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n, x;
  cin >> n >> x;
  ll ans = n-1;
  for (int i = 1; i <= n; i++) {
  	int num;
  	cin >> num;
  	ans += num;
  }
  if (ans == x) cout << "YES" << endl;
  else cout << "NO" << endl;
 	return 0;
}