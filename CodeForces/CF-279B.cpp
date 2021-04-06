
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n, t;
  cin >> n >> t;
  int A[n];
  for (auto &it : A)
  	cin >> it;
  int sum = 0, cnt = 0;
  for (int i = 0, j = 0; i < n; i++) {
  	while (j < n && (sum + A[j]) <= t) {	
  		sum += A[j];
  		j++;
  	}
  	cnt = max (cnt, j - i);
  	if (i == j) j++;
  	else sum -= A[i];
  }
  cout << cnt << endl;
  return 0;
}
