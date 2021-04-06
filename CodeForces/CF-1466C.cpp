#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
 // freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	string s;
  	cin >> s;
  	s = '?' + s;
  	int N = s.size();
  	bool check[N+1];
  	for (int i = 0; i <= N; i++) check[i] = false;
  	int ans = 0;
  	for (int i = 2; i <= N; i++) {
  		bool flag = false;
  		if (s[i] == s[i-1] && !check[i-1]) flag = true;
  		if (i > 2 && s[i] == s[i-2] && !check[i-2]) flag = true;
  		check[i] = flag;
  		ans += check[i];
  	}
  	cout << ans << endl;
  }

 	return 0;
}


