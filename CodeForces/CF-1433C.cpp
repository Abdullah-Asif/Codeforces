
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n;
  	cin >> n;
  	int ara[n];
  	int MX = 0, in;
  	map <int, int> mp;
  	for (int i = 0; i < n; i++) {
  		cin >> ara[i];
  		mp[ara[i]]++;
  		
  	}
  	if (mp.size() == 1) {
  		cout << -1 << endl;
  		continue;
  	}
  	for (int i = 0 ; i < n-1; i++) {
  		if (ara[i] > MX && ara[i] > ara[i+1]) {
  			MX = ara[i];
  			in = i + 1;
  		}
  		else {
  			if (ara[i + 1] > MX && ara[i] < ara[i+1]) {
  			MX = ara[i + 1];
  			in = i + 2;
  			}
  		}
  	}
  	cout << in << endl;	
  }

  return 0;
}
