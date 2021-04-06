#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  bool valid[26];
  for (int i = 0; i < 26; i++) valid[i] = false;
  for (int i = 1; i <= k; i++){
  	char ch;
  	cin >> ch;
  	valid[ch - 'a'] = true;
  }
  ll res = 0, cnt = 0;
  for (int i = 0; i < s.size(); i++) {	
  	if (valid[s[i] - 'a']) cnt++;
  	else {
  		res += (cnt * (cnt + 1)) / 2;
  		cnt = 0;
  	}
  }
  res += (cnt * (cnt + 1)) / 2;
  cout << res << endl;
  
}
