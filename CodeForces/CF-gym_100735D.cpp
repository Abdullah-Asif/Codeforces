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
  ll A[20];
  for (int i = 0; i < n; i++)
  	cin >> A[i];
  sort(A, A + n);
  if (n < 3) cout << 0 << endl;
  else {
  	int cnt = 0;
  	for (int i = 0; i < n; i++) {
  		for (int j = i + 1; j < n; j++) {
  			for (int k = j + 1; k < n; k++) {
  				if ((A[i] &&  A[j] && A[k]) && ((A[i] + A[j]) > A[k])) {
  					cnt++;
  					A[i] = A[j] = A[k] = 0;
  				}
  			}
  		}
  	}
  	cout << cnt << endl;
  }
  return 0;
}
