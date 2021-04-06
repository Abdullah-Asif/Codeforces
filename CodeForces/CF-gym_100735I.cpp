#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;
string sum(string s1, string s2) {
	if (s1.length() > s2.length())
		swap(s1, s2);
	string str = "";
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	int carry = 0;
	for (int i = 0; i < s1.length(); i++) {
		int sum = ((s1[i] - '0') + (s2[i] - '0')) + carry;
		str.push_back(sum % 10 + '0');
		carry = sum / 10;
	}
	for (int i = s1.length(); i < s2.length(); i++) {
		int sum = (s2[i] - '0') + carry;
		str.push_back(sum % 10 + '0');
		carry = sum / 10;
	}
	if (carry) str.push_back(carry + '0');
	reverse(str.begin(), str.end());
	return str;
}

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  string a, b, c;
  cin >> a >> b >> c;
  if((sum(a,b) == c) || (sum(b,c) == a) || (sum(a,c) == b) || (sum(a,a) == b) || (sum(a,a) == c) || (sum(b,b) == a) || (sum(b,b) == c) || (sum(c,c) == a)|| (sum(c,c) == b))
  	cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
