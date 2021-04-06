#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	///freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  if (!(n % 2)) {
  	cout << (n / 2 + 1) * (n / 2  + 1) << endl; 
  }
  else cout << 2 * (n / 2 + 1) * (n / 2 + 2) << endl;

 	return 0;
}