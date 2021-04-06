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
  	int A[n];
  	for (int &i : A) cin >> i;
  	set<int> s;
  	for (int i = 0; i < n; i++) {
  		for (int j = i + 1; j < n; j++) {
  			s.insert(A[j] - A[i]);
  		}
  	}
  	cout << s.size() << endl;
  }

 	return 0;
}


