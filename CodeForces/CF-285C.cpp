#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int  n;
  cin >> n;
  int A[n+1];
  for (int i = 1; i <= n; i++)
  	cin >> A[i];
  sort(A+1, A + n+1);
  ll total = 0;
  for (int i = 1; i <= n; i++) {
  	total += (abs(A[i] - i));
  }
  cout << total << endl;
  return 0;
}
