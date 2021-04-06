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
  int l = 0, r = 0;
  int cnt = 0, tmp = 0;
  if (n == 1) {
  	cout << -1 << endl;
  	return 0;
  }
  bool flag = false;
  for (int i = 0; i < s.size(); i++) {
  	if (s[i] == '(') {
  		l++;
  		cnt++;
      flag = true;
  	}
  	else {
  		r++;
  		if (cnt >= 1) cnt--;
  		else tmp++;
  	}
  }
  if (flag && cnt == 0) {
  	cout << 0 << endl;
  	return 0;
  }
  if (l != r) {
  	cout << -1 << endl;
  	return 0;
  }

  tmp = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
  	if (s[i] == '(') {
      if (tmp < 0) {
        cnt++;
        tmp++;
        goto read;
      }
      tmp++;
    }
    else if (s[i] == ')') tmp--;
    if (tmp < 0) cnt++;
    read :{}
  }
  cout  << cnt << endl;
 	return 0;
}