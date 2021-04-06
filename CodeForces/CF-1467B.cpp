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
  	for (int &it : A) cin >> it;
  	int check[n];
  	memset(check, 0, sizeof(check));
  	if (n == 1 || n == 2) {
  		cout << 0 << endl;
  		continue;
  	}
  	else {
  		int cnt = 0, MX = 0;
  		bool flag = false;
  		for (int i = 1; i < n - 1; i++) {
  			if ((A[i-1] < A[i] && A[i] > A[i+1]) || (A[i-1] > A[i] && A[i] < A[i+1])) {
  				cnt++;
  				check[i] = 1;
  			}
  			check[i] = check[i] + check[i-1];
  		}
  		MX = *max_element(check, check + n);
  		if (MX > 3) MX = 3;
  		cout << cnt - MX << endl;
  	}
  }

 	return 0;
}


