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
  	int n, m;
  	cin >> n >> m;
  	int cnt = 0;
 		int A[n];
 		int B[m];
 		for (int &it : A)
 			cin >> it;
 		for (int &it : B)
 			cin >> it;
 		for (int i = 0; i < n; i++) {
 			for (int j = 0; j < m; j++) {
 				if (A[i] == B[j]) cnt++;
 			}
 		}
 		cout << cnt << endl;
  }	

 	return 0;
}