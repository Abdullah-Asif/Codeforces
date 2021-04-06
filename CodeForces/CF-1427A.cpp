#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n;
  	cin >> n;
  	int A[n];
  	vector<int> pos, neg;
  	int pos_sum = 0, neg_sum = 0;
  	for (int i = 0; i < n; i++) {
  		cin >> A[i];
  		if (A[i] >= 0) {
  			pos.push_back(A[i]);
  			pos_sum += A[i];
  		}
  		else {
  			neg.push_back(A[i]);
  			neg_sum += A[i];
  		}
  	}
  	if (pos_sum + neg_sum == 0) cout << "NO" << endl;
  	else {
  		cout << "YES" << endl;
  		sort(pos.rbegin(), pos.rend());
  		sort(neg.rbegin(), neg.rend());
  		if (abs(pos_sum) >  abs(neg_sum)) {
  			for (auto it : pos)
  				cout << it << ' ';
  			for (auto it : neg)
  				cout << it << ' ';
  			cout << endl;
  		}
  		else {
  			for (auto it : neg)
  				cout << it << ' ';
  			for (auto it : pos)
  				cout << it << ' ';
  			cout << endl;
  		}
  	}	
  }
  return 0;
}
