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
  	ll A[n+1];
  	for (int i = 1; i <= n; i++) cin >> A[i];
  	for (int i = n; i >= 1; i--) 
  		if (A[i] + i <= n) A[i] = A[i] + A[i + A[i]];
  	cout << *max_element(A + 1, A + n + 1) << endl;
  }

 	return 0;
}


