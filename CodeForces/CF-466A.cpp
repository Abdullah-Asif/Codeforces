#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  int x = n * a;
  int y = ((n + (m-1))/m) * b;
  int z = (n % m) * a + (n/m) * b;
  int res = min({x, y, z});
  cout << res << endl;
  
}
