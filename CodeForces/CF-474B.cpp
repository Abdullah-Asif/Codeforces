#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;
int A[1000010];

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  int m = 0;
  for (int i = 1; i <= n; i++) {
  	int x;
  	cin >> x;
  	for (int j = 1; j <= x; j++) A[++m] = i;
  }
 	cin >> m;
 	for (int i = 1; i <= m; i++) {
 		int num;
 		cin >> num;
 		cout << A[num] << ' ';
 	}
 	cout << endl; 
 	return 0;
}