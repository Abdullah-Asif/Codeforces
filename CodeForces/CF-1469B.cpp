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
  	int n, m;
  	cin >> n;
  	int A[n];
  	for (auto &it : A) cin >> it;
  	cin >> m;
  	int B[m];
  	for (auto &it : B) cin >> it;
  	partial_sum(A, A + n, A);
    partial_sum(B, B + m, B);
  	int res = max(0, *max_element(A, A + n)) + max(0, *max_element(B, B + m));
  	cout << res << endl;
  }
 	return 0;
}


