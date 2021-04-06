#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	IOS
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  read :
  while (t--) {
  	int n, k;
  	cin >> n >> k;
  	int h[n];
  	for (int &it : h) cin >> it;
  	for (int i = 1; i <= k; i++) {
  		int stop = 0;
  		while(stop < n-1 && h[stop] >= h[stop+1]) stop++;
  		if (stop == n - 1) {
  			cout << -1 << endl;
  			goto read;
  		}
  		h[stop]++;
  		if (i == k) {
  			cout << stop + 1 << endl;
  			goto read;
  		} 		
  }
 	return 0;
  	}
}


