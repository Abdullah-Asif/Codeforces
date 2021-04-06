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
  	string s1, s2;
  	cin >> s1 >> s2;
  	int red = 0, blue = 0;
  	for (int i = 0; i < n; i++) {
  		if (s1[i] > s2[i]) red++;
  		else if (s1[i] < s2[i]) blue++;
  	}
  	if (red == blue) cout << "EQUAL" << endl;
  	else if (red > blue) cout << "RED" << endl;
  	else cout << "BLUE" << endl;
  }

 	return 0;
}