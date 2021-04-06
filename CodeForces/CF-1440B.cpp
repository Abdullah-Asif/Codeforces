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
  	int n, k;
  	cin >> n >> k;
  	int A[n * k];
  	int x = k;
  	for (int i = 0; i < (n * k); i++) 
  		cin >> A[i];
  	ll res = 0;
    k = n * k - 1;
  	 n /= 2;
  	int cnt = 0;
  	for (int i = k - n; i >= 0; i -= n+1) {
  		res += A[i];
  		cnt++;
  		if (cnt == x) break;
  	}
  	cout << res << endl; 
  }
  
}
