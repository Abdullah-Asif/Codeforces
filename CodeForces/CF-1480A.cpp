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
  	string s;
  	cin >> s;
  	for (int i = 0; i < s.size(); i++) {
  		if (i % 2 == 0) {
  			if (s[i] == 'a') cout << (char)(s[i] + 1);
  			else cout << 'a';
  		}
  		else {
  			if (s[i] == 'z') cout << (char)(s[i] - 1);
  			else cout << 'z';
  		}
  	}
  	cout << endl;
  }

 	return 0;
}


