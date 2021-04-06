
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
  	int len = s.size(),cnt = 0;
  	int temp = s[0] - '0';
  	for (int i = 1; i < temp; i++) {
  		cnt += 10;
  	}
  	cnt += (len * (len + 1)) / 2;
 	cout << cnt << endl;

  }

  return 0;
}
