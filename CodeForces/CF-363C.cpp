#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  string s;
  cin >> s;
  vector<char> ch;
  for (int i = 0; i < s.size(); i++) {
  	ch.push_back(s[i]);
  	if (ch.size() >= 3) {
  		if (ch[ch.size()-1] == ch[ch.size()-2] && ch[ch.size()-1] == ch[ch.size()-3]) 
  			ch.pop_back();
  	}
  	if (ch.size() >= 4) {
  		if (ch[ch.size()-1] == ch[ch.size()-2] && ch[ch.size()-3] == ch[ch.size()-4]) 
  			ch.pop_back();
  	}
  }
  for (auto it : ch)
  	cout << it;
  cout << endl;
}
