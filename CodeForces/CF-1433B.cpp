
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
  	int ara[n];
  	for (auto &it : ara)
  		cin >> it;
  	int prv1 = 0, nxt1 = 0, cnt = 0, zero = 0;
  	for (int i = 0; i < n; i++) {
  		if (ara[i] == 1) prv1 = 1;
  		if (prv1 == 1 && ara[i] == 0) zero++;
  		if (prv1 == 1 && ara[i] == 1) {
  			cnt += zero;
  			zero = 0;
  		}
  	}
  	cout << cnt << endl;	
  }

  return 0;
}
