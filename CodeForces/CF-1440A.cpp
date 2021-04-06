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
  	int n, c0, c1, h;
  	cin >> n >> c0 >> c1 >> h;
  	string s;
  	cin >> s;
  	int cnt1 = 0, cnt0 = 0;
  	for (int i = 0; i  <s.size(); i++) {
  		if (s[i] == '0') cnt0++;
  		else cnt1++;
  	}
  	int a = (cnt1 * c1) + (cnt0 * c0);
  	int b = (h * cnt1) + (n * c0);
  	int c = (h * cnt0) + (n * c1);
  	int res = min(a, min(b,c));
  	cout << res << endl;
  }
}
