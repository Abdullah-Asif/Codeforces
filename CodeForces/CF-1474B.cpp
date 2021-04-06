#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;

const int SZ = 1000001;
int ara [SZ];
vector <int> prime;

void Seive() {
  int i, root, j;
  ara[0] = ara[1] = -1;
  for(i = 2; i * i < SZ; i++) {
    if (!ara[i]) {
      for (j = i * i; j < SZ; j += i) {
        if (!ara[j]) ara[j] = -1;
      }
    }
  }
}

void Prime() {
  for (int i = 2; i < SZ; i++) {
    if (ara[i] == 0)
      prime.push_back(i);
  }
 // cout << "Total prime: " << prime.size() << endl;
}
int main()
{
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  Seive();
  Prime();
  int t;
  cin >> t;
  read :
  while (t--) {
  	int d;
  	cin >> d;
  	ll res = 1;
  	for (int i = 0; i < prime.size(); i++) {
  		if ((prime[i] - 1) >= d) {
  			res = prime[i];
  			for (int j = i + 1;  j < prime.size(); j++) {
  				if ((prime[j] - prime[i]) >= d) {
  					cout << res * prime[j] << endl;
  					goto read;
  				}
  			}
  		}
  	}
  }
}

