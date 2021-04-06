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
  	int even = 0;
  	for (int &it : A) {
  		cin >> it;
  		even += (it % 2) == 0;
  	}
  	if (even == n) cout << -1 << endl;
    else cout << even << endl;
  }

 	return 0;
}


