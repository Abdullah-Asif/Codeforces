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
  for (int i = 0; i + 3 < s.size(); i++) {
  	bool flag = false;
  	for (int j = i; j + 3 < s.size(); j++) {
  		if (s[j] == 'b' && s[j+1] == 'e' && s[j+2] == 'a' && s[j+3] == 'r')
  			flag = true;
  		if (flag) cnt++;
  	}
  }
  cout << cnt << endl;
}
