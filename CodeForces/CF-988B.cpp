#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

bool compare(string &s1, string &s2) {
	return s1.size() < s2.size();
}

int main() {
	//freopen("input.txt","r",stdin);
 // freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  vector<string> s;
  string large = "";
  for(int i = 0; i < n; i++) {
  	string ss;
  	cin >> ss;
  	s.push_back(ss);
  }
  sort(s.begin(), s.end(), compare);
  int cnt = 0;
  for (int i = 1; i < n; i++) {
  	if (s[i].find(s[i-1]) == string::npos) {
  		cout << "NO" << endl;
  		return 0;
  	}
  }
  cout << "YES" << endl;
  for (auto it : s)
  	cout << it << endl;
  cout << endl;
}
