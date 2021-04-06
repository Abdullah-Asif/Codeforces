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
  	string s;
  	cin >> n >> s;
  	string S(n, '1');
  	for (int i = 1; i < n; i++) {
  		if (S[i] + s[i] == S[i-1] + s[i-1]) S[i] = '0';
  	}
  	cout << S << endl;
  }

 	return 0;
}


