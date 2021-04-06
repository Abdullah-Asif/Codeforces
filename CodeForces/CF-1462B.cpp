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
  read :
  while (t--) {
  	int n;
  	cin >> n;
  	string s;
  	cin >> s;  	
  	if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0') {
  		cout << "YES" << endl;
  		goto read;
  	}
  	if (s[n-1] == '0' && s[n-2] == '2' && s[n-3] == '0' && s[n-4] == '2') {
  		cout << "YES" << endl;
  		goto read;
  	}
    if (s[0] == '2' && s[1] == '0' && s[n-2] == '2' && s[n-1] == '0') {
  	  cout << "YES" << endl;
  		goto read;
  	}
   	
  	if (s[0] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0') {
  		cout << "YES" << endl;
  		goto read;
  	}
  	
    if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n-1] == '0') {
  		cout << "YES" << endl;
  	  goto read;
  	}
  	cout << "NO" <<endl;
  }

 	return 0;
}