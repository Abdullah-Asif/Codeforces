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
  	for (auto &it : A)
  		cin >> it;
  	for (int i = 0 ; i < n; i+= 2) {
  		// if (A[i] < 0 && A[i+1] < 0) {
  		// 	cout << A[i+1] << ' ' << A[i] << ' ';
  		// }
  		// else if (A[i] < 0 || A[i+1] < 0) {
  		// 	cout << A[i + 1] << ' ' << A[i] << ' ';
  		// }
  		//else 
  			cout << A[i+1] * -1 << ' ' << A[i] << ' ';
  	}
  	cout << endl;
  }
  
}
