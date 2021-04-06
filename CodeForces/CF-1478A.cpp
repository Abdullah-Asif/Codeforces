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
  	map<int, int> mp;
  	for (int &it : A) {
  		cin >> it;
  		mp[it]++;
  	}
  	int MX = 0;
  	for (auto it : mp) MX = max(MX, it.second);
  	cout << MX << endl;

  }

 	return 0;
}


