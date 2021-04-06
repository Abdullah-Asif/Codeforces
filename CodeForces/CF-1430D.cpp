
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
 		string s;
 		cin >> s;
 		queue<int> q;
 		int cur = 0;
 		for (int i = 1; i < n; i++) {
 			if (s[i] != s[i-1]) cur++;
 			else if (s[i] == s[i-1]) q.push(cur);
 		}
 		int cnt = 0, d = 0;
 		for (int i = 0; i < n; i++) {
 			if (q.empty()) break;
 			q.pop();
 			d++;
 			cnt++;
 			while (!q.empty() && q.front() == i) {
 				q.pop();
 				d++;
 			}
 			d++;
 		}
 		cnt += (n - d + 1) / 2;
 		cout << cnt << endl;
 	}

  return 0;
}
