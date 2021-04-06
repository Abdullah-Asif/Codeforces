#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  string s;
  cin >> s;
  int cnt = 0;
  if (s.size() == 1) cout << "NO" << endl;
  else {
  	bool flag = false;
  	for (int i = 1; i < s.size(); i++) {
  		if (s[i] == s[i-1]) {
  			s.erase(i-1, 2);
  			i -= 2;
  			cnt++;
  			if (s.empty()) flag = true;
  		}
  		if (flag) break;
  	}
  	if (cnt % 2) cout << "YES" << endl;
  	else cout << "NO" << endl;
  }
  return 0;
}
