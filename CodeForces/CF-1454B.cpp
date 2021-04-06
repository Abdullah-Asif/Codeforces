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
  	int A[n];
  	map <int, int> mp;
  	for (auto &it : A) {
  		cin >> it;
  		mp[it]++;
  	}
  	bool flag = false;
  	int num;
  	for (auto it : mp) {
  		if (it.second == 1) {
  			flag = true;
  			num = it.first;
  			break;
  		} 
  	}
  	if (flag) {
  		for (int i = 0; i < n; i++) {
  			if (num == A[i])
  				cout << i + 1 << endl;
  		}
  	}
  	else cout << -1 << endl;
  }
  
}
