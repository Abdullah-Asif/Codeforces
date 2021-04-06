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
  	int n, i, j;
  	cin >> n;
  	string s;
  	cin >> s;
  	int cnt = 0;
  	for (int i = 0; i < n-1; i++) {
  		if (s[i] == s[i+1]) cnt++;
  	}
  	cout << (cnt+1)/2 << endl;
  }
}
