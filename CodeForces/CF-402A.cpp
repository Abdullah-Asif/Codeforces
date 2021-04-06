#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

void solve () {
	int k, a, b, v;
	cin >> k >> a >> b >> v;
	int box = 0, sum = 0;
	while (sum < a) {
		box++;
		int d = min(k-1, b);
		sum += (d+1) * v;
		b -= d;
	}
	cout << box << endl;
}

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  solve();

 	return 0;
}