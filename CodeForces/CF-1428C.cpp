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
  	int cnt = 0;
  	for (int i = 0; i < s.size(); i++) {
  		if (cnt && s[i] == 'B') cnt--;
  		else cnt++;
  	}
  	cout << cnt << endl;
  }
  return 0;
}
