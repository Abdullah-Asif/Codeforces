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
  ll A[n];
  for (ll &it : A)
  	cin >> it;
  ll cnt = 1,MX = 0;
  for (int i = 0; i < n -1; i++) {
  	if ((A[i] * 2) >= A[i+1]){
  		cnt++;
  		//cout << A[i] << ' ' << A[i+1] << endl;
  	} 
  	else {
  		MX = max(MX, cnt);
  		cnt = 1;
  	}
  }
  cout << max(MX,cnt) << endl; 
  
 	return 0;
}