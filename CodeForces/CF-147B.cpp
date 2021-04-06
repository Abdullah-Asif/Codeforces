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
  	int n, k;
  	cin >> n >> k;
  	int A[n];
  	for (int &it : A)
  		cin >> it;
  	int day = 1e7;
  	for (int i = 1; i <= 100; i++) {
  		int cnt = 0;
  		for (int j = 0; j < n; j++) {
  			if (A[j] != i) {
  				cnt++;
  				j += k-1;
  			}
  		}
  		day = min(day, cnt);
  	}
  	cout << day << endl;
  } 	

 	return 0;
}
