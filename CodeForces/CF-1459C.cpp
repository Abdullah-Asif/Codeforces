#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  int n, m;
  cin >> n >> m;
  ll A[n];
  for (auto &it : A)
  	cin >> it;
  sort(A, A + n);
  ll g = 0;
  for (int i = 0; i < n; i++) {
  	g = __gcd(g, A[i] - A[0]);
  }
  for (int i = 0; i < m; i++) {
  	ll num;
  	cin >> num;
  	cout << __gcd(A[0] + num, g) << ' ';
  }
  cout << endl;
 	return 0;
}