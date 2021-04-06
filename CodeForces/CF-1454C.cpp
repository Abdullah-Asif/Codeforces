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
  	int A[n];
  	map <int, int> mp;
  	for (auto &it : A) {
  		cin >> it;
  		mp[it]++;
  	}
  	int cnt = 1e7, num;
  	for (auto it : mp) {
  		if (it.second < cnt) {
  			cnt = it.second;
  			num = it.first;
  		}
  	}
  	//cout << num << ' ' << cnt << endl;
  	if (mp.size() == 1) {
  		cout << 0 << endl;
  		continue;
  	}
  	for (int i = 1; i < n; i++) {
  		if (A[i] == A[i-1]) mp[A[i]]--;
  	}
  	int res = 1e7;
  	for (auto it : mp) {
  		int tmp;
  		if (it.second == 1) {
  			if (A[0] == it.first || A[n-1] == it.first) {
  				tmp = 1;
  			}
  			else tmp = 2;
  		}
  		else if (A[0] == it.first && A[n-1] == it.first) {
  			tmp = it.second - 1;
  		}
	  	else if (A[0] == it.first || A[n-1] == it.first) tmp = it.second;
	  	else tmp = it.second + 1;
	  	res = min(res, tmp);
  	}
  	cout << res << endl;
  }
  
}
