#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n, k;
  cin >> n >> k;
  int A[n], C[n];
  for (int i = 0; i < n; i++) {
  	cin >> A[i];
  	C[i] = A[i];
  }
  int B[n], cnt = 1, j, i;
  
  B[0] = A[0];
  for (i = 1; i < k; i++) {
  	A[i] = A[i] + A[i-1];
  	B[i] = A[i];
  }
  for (i = i, j = 0; i < n; i++, j++) {
  	A[i] = A[i] + A[i-1];
  	B[i] = A[i];	
  	B[i] = B[i] - C[j];	
  	A[i] = B[i];
  }
  int MN = 1e9, in;
  for (int i = k-1; i < n; i++) {
  	if (B[i] < MN) {
  		MN = B[i];
  		in = i;
  	}
  }
  //cout << in << endl;
  cout << in - (k -1) + 1 << endl;
}
