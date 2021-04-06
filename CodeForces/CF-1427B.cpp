
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
  	int n, k;
  	cin >> n >> k;
  	int wins = 0, lose = 0, w_s = 0;
  	string s;
  	vector<int> l_s;
  	cin >> s;
  	for (int i = 0; i < n; i++) {
  		if (s[i] == 'W') {
  			wins++;
  			if (i == 0 || s[i-1] == 'L') w_s++;
  		}
  		if (s[i] == 'L') {
  			lose++;
  			if (i == 0 || s[i-1] == 'W') {
  				l_s.push_back(0);
  			}
  			l_s.back()++;
  		}
  	}
  	if (k >= lose) {cout << 2 * n - 1 << endl; continue;}
  	if (wins == 0) {
  		if (k == 0) cout << 0 << endl;
  		else cout << 2 * k - 1 << endl;
  		continue;
  	}
  	if (s[0] == 'L') l_s[0] = 1e9;
  	if (s[n-1] == 'L') l_s.back() = 1e9;
  	sort (l_s.begin(), l_s.end());
  	wins += k;
  	for (auto it : l_s) {
  		if (it > k) break;
  		k -= it;
  		w_s--;
  	}
  	cout << 2 * wins - w_s << endl;
  }

  return 0;
}
