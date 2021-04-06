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
  int SZ = s.size();
  int MX = -1;
 	int odd = s[SZ-1] - '0';
  for (int i = 0; i < SZ; i++) {
  	int tmp = s[i] - '0';
  	if (tmp% 2 == 0) {
  		if (tmp <= odd) {
  			swap(s[i], s[SZ-1]);
  			cout << s << endl;
  			return 0;
  		}
  		else MX = i;
  	}
  }
 	if (MX != -1) {
 		swap(s[MX], s[SZ-1]);
 		cout << s << endl;
 	}
  else cout << -1 << endl;
 	return 0;
}