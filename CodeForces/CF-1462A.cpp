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
  	int A[n+1];
  	for (int i = 1; i <= n; i++) {
  		cin >> A[i];
  	}
  	int i, j;
  	for (i = 1,j = n; i <= j; i++, j--) {
  		if (i == j) cout << A[i] << ' ';
  		else cout << A[i] << ' ' << A[j] << ' ';
  	}
  	cout << endl;
  }
 	return 0;
}