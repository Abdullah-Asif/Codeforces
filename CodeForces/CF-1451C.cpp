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
  	string a, b;
  	cin >> a;
  	cin >> b;
  	int i, j , cnt;
  	sort (a.begin(), a.end());
  	sort (b.begin(), b.end());
  	int X[26], Y[26];
  	bool flag = true;
  	for (int i = 0; i < 26; i++)  X[i] = Y[i] = 0;
  	for(int i = 0; i < n; i++) {
  		X[a[i] - 'a']++;
  		Y[b[i] - 'a']++;
  		if (a[i] > b[i]) {
  			flag = false;
  		}
  	}
  	for (int i = 0; i < 26; i++) {
  		int tmp = abs(X[i] - Y[i]);
  		if (tmp % k) flag = false;
  	}
  	if (flag) cout << "YES" << endl;
  	else cout << "NO" << endl;
  }
  
}
