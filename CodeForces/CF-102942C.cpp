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
  	int ans = 0;
  	vector<int> vc;
  	for (int &it : A){
  	  cin >> it;	
  	  if (it >= k) ans++;
  	  else vc.push_back(it);
  	}
  	sort(vc.begin(), vc.end());
  	int sz = vc.size();
  	for (int i = 0, j = sz - 1; i < j; ) {
  		if ((vc[i] + vc[j]) < k) i++;
  		else if ((vc[i] + vc[j]) >= k) {
  			ans += 1;
  			i++, j--;
  		}
  	}
  	cout << ans << endl;
  }

 	return 0;
}


