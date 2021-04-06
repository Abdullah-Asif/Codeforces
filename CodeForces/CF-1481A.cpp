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
  	int x, y;
  	cin >> x >> y;
  	string s;
  	cin >> s;
    vector<int> v(100, 0);
    for (char it : s) v[it]++;
    if (-v['L'] <= x && v['R'] >= x && -v['D'] <= y && v['U'] >= y)	cout << "YES" << endl;
    else cout << "NO" << endl;
  }

 	return 0;
}


