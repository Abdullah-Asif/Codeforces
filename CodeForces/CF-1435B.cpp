#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n, m;
  	cin >> n >> m;
  	int A[n][m];
  	int B[n][m];
  	for (int i = 0; i < n; i++) {
  		for (int j = 0; j < m; j++) {
  			cin >> A[i][j];
  		}
  	}
  	int C[m][n];
  	for (int i = 0; i < m; i++) {
  		for (int j = 0; j < n; j++) {
  			cin >> C[i][j];
  		}
  	}
  	for (int i = 0; i < n; i++) {
  		for (int j = 0; j < m; j++) {
  			 B[i][j] = 0;
  		}
  	}
  	
  	for (int i = 0; i < m; i++) {
  		for (int j = 0; j < m; j++) {
  			for (int k = 0; k < n; k++) {
  				if (A[0][i] == C[j][k]) {
  					for (int s = 0; s < m; s++) {
  						B[s][k] = A[0][i];
  					}
  				}
  			}
  		}
  	}
  	for (int i = 0; i < n; i++) {
  		for (int j = 0; j < m; j++) {
  			 cout << A[i][j] << ' ';
  		}
  		cout << endl;
  	}
  		cout << endl;
  		for (int i = 0; i < m; i++) {
  			for (int j = 0; j < n; j++) {
  				 cout << C[i][j] << ' ';
  			}
  			cout << endl;
  		}
  		cout << endl;
  	}
  }
