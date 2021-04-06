
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
  int MN[3], MX[3];
  cin >> MN[0] >> MX[0];
  cin >> MN[1] >> MX[1];
  cin >> MN[2] >> MX[2];
  int sum  = 0;
  for (int i = 0; i < 3; i++) {
  	MX[i] = MX[i] - MN[i];
  }
  sum = accumulate (MN, MN + 3, sum);
  n -= sum;
  for (int i = 0; i < 3; i++) {
  	int temp = min(MX[i], n);
  	n -= temp;
  	MN[i] += temp;
  }
  cout << MN[0] << ' ' << MN[1] << ' ' << MN[2] << endl;
  return 0;
}
