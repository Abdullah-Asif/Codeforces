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
  int one = 0, zero = 0;
  for (int i = 0; i < s.size(); i++) {
  	if (s[i] == '1') one++;
  	else zero++;
  }
  cout << min(zero, one) << endl;
  return 0;
}
