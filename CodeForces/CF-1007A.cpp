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
  for (int &it : A)
  	cin >> it;
  sort(A, A + n);
  int cnt = 0;
  if (n == 1) {
  	cout << 0 << endl;
  	return 0;
  }
  for (int i = 1, j = 0; i < n; i++) {
  	if(A[i] > A[j]) {
  		cnt++;
  		j++;
  	}
  }
  cout << cnt << endl;
 	return 0;
}