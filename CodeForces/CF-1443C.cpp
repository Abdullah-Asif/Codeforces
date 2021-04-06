#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;
int A[200001], B[200001], visited[200001];

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n;
  	cin >> n;
  	for (int i = 0; i < n; i++) 
  		cin >> A[i];
  	for (int i = 0; i < n; i++) 
  		cin >> B[i];
  	ll L = 1, R = 1000000000, mid, MN = INT_MAX;
  	while (L <= R) {
  		mid = (L + R)  / 2;
  		ll counter = 0;
  		for (int i = 0 ; i < n; i++) {
  			if (A[i] <= mid)
  				visited[i] = 1;
  			else visited[i] = 0;
  		}
  		for (int i = 0; i < n; i++) 
  			if (!visited[i]) counter += B[i];
  		MN = min(MN, max(counter, mid));
  		if (counter >= mid) L = mid + 1;
  		else R = mid - 1;
  	}
  	cout << MN << endl;
  }
 	return 0;
}

