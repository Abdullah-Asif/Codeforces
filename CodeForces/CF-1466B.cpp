	#include <bits/stdc++.h>
	using namespace std;

	#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#define endl "\n"

	typedef long long ll;

	int main() {
		IOS
		//freopen("input.txt","r",stdin);
	  //freopen("output.txt","w",stdout);
	  int t;
	  cin >> t;
	  while (t--) {
	  	int n;
	  	cin >> n;
	  	set<int> s;
	  	for (int i = 1; i <= n; i++) {
	  		int num;
	  		cin >> num;
	  		if (s.count(num)) num++;
	  		s.insert(num);
	  	}
	  	cout << s.size() << endl;
	  }

	 	return 0;
	}


