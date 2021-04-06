#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n, m;
  cin >> n >> m;
  char A[n][m];
  vector <int> cnt(m);
  for (int i = 0; i < n; i++) {
  	for (int j = 0; j < m; j++) {
  		cin >> A[i][j];
  		if (A[i][j] == '1') cnt[j]++;
  	}
  }
  for (int i = 0; i < n; i++) {
  	bool flag = true;
  	for (int j = 0; j < m; j++) {
  		if (A[i][j] == '1' && cnt[j] == 1)
  			flag = false;
  	}
  	if (flag) {
  		cout << "YES" << endl;
  		return 0;
  	}
  }
  cout << "NO" << endl;
}
