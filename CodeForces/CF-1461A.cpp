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
  	string s = "abc";
  	for (int i = 0; i < n; i++) { 
  		cout << s[i % 3];
  	}
  	cout << endl;
  }
 	return 0;
}