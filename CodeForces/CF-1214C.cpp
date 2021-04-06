#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  string s;
  cin >> s;
  int cnt = 0, MN = 1e7;
  for (int i = 0; i < s.size(); i++) {
  	if (s[i] == '(') cnt++;
  	else cnt--;
  	MN = min (MN, cnt);
  }
  if (MN >= -1 && cnt == 0 ) cout << "Yes" << endl;
  else cout << "No" << endl;

 	return 0;
}