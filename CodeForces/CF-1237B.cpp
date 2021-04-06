#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int A[100001];
int B[100001];

int main() {
	freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
  	cin >> A[i];
  }
  for (int i = 1; i <= n; i++) {
  	int num;
  	cin >> num;
  	B[num] = i;
  }
  for (int i = 1; i <= n; i++) {
  	A[i] = B[A[i]];
  }
 
  int MX = 0, cnt = 0;
  for (int i = 1; i <= n; i++) {
  	if (A[i] > MX) MX  = A[i];
  	else cnt++;
  }
  cout << cnt << endl;	

 	return 0;
}