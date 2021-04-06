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
  	int n;
  	cin >> n;
  	int A[n];
  	for (int &it : A) cin >> it;
  	sort(A, A + n);
  	int res = 0;
  	for (int i = 0; i < n; i++) {
  		res += A[i] > A[0];
  	}
  	cout << res << endl;
  }
 	return 0;
}


