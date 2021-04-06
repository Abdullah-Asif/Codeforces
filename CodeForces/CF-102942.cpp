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
  	int n;
  	cin >> n;
  	string s, s1 = "ESWN";
  	cin >> s;
 		int sum = 0;
  	for (char it : s) {
  		if (it == '0') sum++;
  		else sum--;
  	}
  	sum %= 4;
    sum += 4;
    sum %= 4;
    cout << s1[sum] << endl;
  }
 	return 0;
}


