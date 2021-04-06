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
  	int A[n];
  	for (auto &it : A)
  		cin >> it;
  	vector<int> cnt(32);
  	for (int i = 0; i < n; i++) {
  		int bit = __builtin_clz(A[i]);
  		cnt[bit]++;
  	}
  	ll ans = 0;
  	for (int i = 0; i < 32; i++) {
  		ans += (ll)cnt[i] * (cnt[i]-1) / 2;
  	}
  	cout << ans << endl;
  }
  return 0;
}
