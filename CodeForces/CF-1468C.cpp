#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	IOS
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int q;
  priority_queue< pair<int, int> > p;
  vector<int> check(1e7, 0);
  int j = 0, done = 1;
  cin >> q;
  while (q--) {
  	int n;
  	cin >> n;
  	if (n == 1) {
  		int num;
  		cin >> num;
  		p.push(make_pair(num, -(++j)));
  	}
  	else if (n == 2) {
  		while(check[done]) done++;
  		cout << done << ' ';
  		check[done] = true;
  	}
  	else {
  		while(true) {
  			auto it = p.top();
  			p.pop();
  			if (check[-it.second] == true) continue;
  			cout << -it.second << ' ';
  			check[-it.second] = true;
  			break;
  		}
  	}
  }
  cout << endl;
 	return 0;
}


