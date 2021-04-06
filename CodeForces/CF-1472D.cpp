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
  	vector<int> A(n), O, E;
  	for (int &it : A) {
  		cin >> it;
  	}
  	sort(A.rbegin(), A.rend());
  	ll sum = 0;
  	for (int i = 0; i < n; i++) {
  		if (!(i % 2) && !(A[i] % 2)) sum += A[i];
  		else if (i % 2 && (A[i] % 2)) sum -= A[i];
  	}
  	if (sum > 0) cout << "Alice" << endl;
  	else if (sum == 0) cout << "Tie" << endl;
  	else cout << "Bob" << endl;
  }

 	return 0;
}


