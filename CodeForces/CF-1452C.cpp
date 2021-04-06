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
  	string s;
  	cin >> s;
  	int first = 0, third = 0, cnt = 0;
  	for (int i = 0; i < s.size(); i++) {
  		if (s[i] == '(') first++;
  		else if (s[i] == ')' && first != 0) {
  			first--;
  			cnt++;
  		}
  		else if (s[i] == '[') third++;
  		else if (s[i] == ']' && third != 0) {
  			third--;
  			cnt++;
  		}
  	}
  	cout << cnt << endl;
  }
}
