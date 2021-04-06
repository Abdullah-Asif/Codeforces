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
		vector <pair <int, int> > vc(n);
		for (int i = 0; i < n; i++) {
			cin >> vc[i].first >> vc[i].second;
		}
		bool flag = false;
		sort(vc.begin(), vc.end());
		for (int i = 0; i < n-1; i++) {
			if (vc[i].second > vc[i+1].second) flag = true;
		}
		if (flag) cout << "NO" << endl;
		else {
			cout << "YES" << endl;
			for (int i = 1; i <= vc[0].first; i++)
				cout << 'R';
			for (int i = 1; i <= vc[0].second; i++)
				cout << 'U';
			for (int i = 1; i < n; i++) {
				for (int j = 1; j <= vc[i].first - vc[i-1].first; j++)
					cout << 'R';
				for (int j = 1; j <= vc[i].second - vc[i-1].second; j++)
					cout << 'U';
			}
			cout << endl;
		}
	}  
  
}
