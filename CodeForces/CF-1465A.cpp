#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
 // freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n;
  	cin >> n;
  	string s;
  	cin >> s;
  	int cnt = 0;
  	for (int i = n-1; i>= 0; i--) {
  		if (s[i] == ')') cnt++;
  		else break;
  	}
  if (cnt > (n - cnt)) cout << "YES" << endl;
  else cout << "NO" << endl; 
 }
 	return 0;
}