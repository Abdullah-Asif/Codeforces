#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	IOS
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n, d;
  	cin >> n >> d;
  	int A[n];
  	for (int &it : A) cin >> it;
  	sort(A, A + n);
  	if (A[0] + A[1] <= d || A[n-1] <= d) cout << "YES" << endl;
  	else cout << "NO" << endl;
  }

 	return 0;
}


