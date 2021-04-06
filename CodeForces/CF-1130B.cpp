#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;
pair<ll, ll> A[200000];


int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  for (int i = 1; i <= 2 * n; i++) {
  	int x;
  	cin >> x;
  	if (A[x].first == 0) A[x].first = i;
  	else A[x].second = i;
  }
  ll ans = 0;
  for (int i = 1; i <=n; i++) {
  	if (A[i].first > A[i].second) swap(A[i].first, A[i].second);
  	ans += abs(A[i].first - A[i-1].first);
  	ans += abs(A[i].second - A[i-1].second);
  }
  cout << ans - 2 << endl;
  return 0;
}
