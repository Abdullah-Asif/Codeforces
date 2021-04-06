#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;


int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  int A[n];
  for (auto &it : A)
  	cin >> it;
  int sum = 0;
  for (int mask = 0; mask < (1 << n); mask++) {
  	sum = 0;
  	for (int i = 0; i < n; i++) {
  		if (mask & (1 << i)) sum += A[i];
  		else sum -= A[i];
  	}
  	if (sum % 360 == 0) {
  		cout << "YES";
  		return 0;
  	}
  }
  cout << "NO" << endl;
  return 0;
}
