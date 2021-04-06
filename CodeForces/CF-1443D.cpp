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
  	int A[n];
  	for (auto &it : A)
  		cin >> it;
  	int leftMost = A[0];
  	for (int i = n-1; i > 0; i--) {
  		A[i] -= A[i-1];
  		if (A[i] < 0) leftMost += A[i];
  	}
  	cout << (leftMost >= 0 ? "YES" : "NO") << endl;
  }
  return 0;
}
