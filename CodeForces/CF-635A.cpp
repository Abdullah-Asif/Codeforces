#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int r, c, n, k1;
  cin >> r >> c >> n >> k1;
  int A[r][c];
  for (int i = 0; i < r; i++)
  	for (int j = 0; j < c; j++)
  		A[i][j] = 0;
  for (int i = 1; i <= n; i++) {
  	int n1, n2;
  	cin >> n1 >> n2;
  	A[n1-1][n2-1] = 1;
  }
  int tmp, cnt = 0;
  for (int i = 0; i < r; i++) {
  	for (int j = 0; j < c; j++) {
  		for (int k = i; k < r; k++) {
  			for (int l = j; l < c; l++) {
  				tmp = 0;
  				for (int m = i; m <= k; m++) {
  					for (int o = j; o <= l; o++) {
  						//cout << m << o << endl;
  						if (A[m][o] == 1) tmp++;	
  					}
  				}
  				//cout << endl;
  				if (tmp >= k1) cnt++;
  			}		
  		}
  	}
  }
  cout << cnt << endl;
}
