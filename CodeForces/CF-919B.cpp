#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;
vector<int> vc;

int cal (int n) {
	int val = 0;
	while (n) {
		val += n % 10;
		n /= 10;
	}
	return val;
}
  	
int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
 	for (int i = 1; i <= 11000000; i++) {
 		if (cal(i) == 10) vc.push_back(i);
 	}
  int n;
  cin >> n;
  cout << vc[n-1] << endl;  
}
