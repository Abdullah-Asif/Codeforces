#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

const int MOD = 998244353;
int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  ll n, k;
  cin >> n >> k;
  ll A[n];
  for (auto &it : A)
  	cin >> it;
  ll ans = 0, ways = 1;
  vector<int> vc;
  for (int i = 0; i < n; i++) {
  	if (A[i] >= (n-k + 1)) ans += A[i], vc.push_back(i);
  }
  for (int i = 1; i < vc.size(); i++) {
  	ways *= (vc[i] - vc[i-1]);
  	ways %= MOD;
  }
  cout << ans << ' ' << ways << endl;

 	return 0;
}