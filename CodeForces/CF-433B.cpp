#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n, m;
  cin >> n;
  vector<ll> vc(n+1), A(n+1), B(n+1);
  for (int i = 1; i <= n; i++)
  	cin >> vc[i];
  A[0] = 0, B[0]= 0;
  for (int i = 1; i <= n; i++) {
  	A[i] = A[i-1] + vc[i];
  }
  sort(vc.begin() + 1, vc.end());
  for (int i = 1; i <= n; i++) {
  	B[i] = B[i-1] + vc[i];
  }
  cin >> m;
  for (int i = 1; i <= m; i++) {
  	int type, l, r;
  	cin >> type >> l >> r;
  	if (type == 1) cout << A[r] - A[l-1] << endl;
  	else cout << B[r] - B[l-1] << endl;
  }
 	return 0;
}