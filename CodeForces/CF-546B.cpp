#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  int A[n];
  for (auto &it : A)
  	cin >> it;
 	int coin = 0;
 	sort(A, A + n);
 	// for (auto it : A)
 	// 	cout << it << ' ';
 	// cout << endl;
 	for (int i = 1; i < n; i++) {
 		if (A[i] == A[i-1]) {
 			A[i] += 1;
 			coin++;
 		}
 		else if (A[i] < A[i-1]) {
 			int temp = (A[i-1] + 1) - A[i];
 			A[i] += temp;
 			coin += temp;
 		}
 	}
 	// for (auto it : A)
 	// 	cout << it << ' ';
 	// cout << endl;
 	cout << coin << endl;
  
}
