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
  	int n, i;
  	cin >> n;
  	int A[n];
  	for (i = 0; i < n; i++)
  		cin >> A[i];
  	for (i = 0; i < n; i++) {
  		if (A[i] >= i) continue;
  		else break;
  	}
  	i--;
  	bool flag = true;
  	for (int j = n-1; j >= i; j--) {
  		if (A[j] < (n-1-j)) {
  			flag = false;
  			break;
  		}
  	}
  	if (flag) cout << "Yes" << endl;
  	else cout << "No" << endl;
  }
 	return 0;
}