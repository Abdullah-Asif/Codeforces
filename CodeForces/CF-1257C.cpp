#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;
int A[200005];
int l[200005];
int r[200005];
int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
	  memset(A, 0, sizeof(A));
	  memset(l, 0, sizeof(l));
	  memset(r, 0, sizeof(r));
	  int n;
	  cin >> n;
	  int MN = 1e7;
	  bool flag = false;
	 	for (int i = 0; i < n; i++) {
	 		int num;
	 		cin >> num;
	 		A[num]++;
	 		if (A[num] == 1) {
	 			l[num] = i;
	 		}
	 		else if (A[num]>= 2){
	 			r[num] = i;
	 			MN = min (MN, r[num] - l[num] + 1);
	 			l[num] = r[num];
	 			flag = true;
	 		}
	 	}
	  if (flag)	cout << MN << endl;
	  else cout << -1 << endl;
	}
}
