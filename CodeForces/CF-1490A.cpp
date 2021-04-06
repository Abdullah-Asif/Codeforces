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
  	int cnt = 0;
  	for (auto &it : A) cin >> it;
  	for (int i = 0; i < n - 1; i++) {
  		int MX = max (A[i], A[i+1]);
  		int MN = min (A[i], A[i+1]);
  		while (MN * 2 < MX) {
  			cnt++;
  			MN *= 2;
  		}
  	}
  	cout << cnt << endl;
  }

 	return 0;
}


