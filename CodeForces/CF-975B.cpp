#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);

  vector<ll> v1(15);
  for (ll i = 1; i <= 14; i++) {
  	cin >> v1[i];
  }
  ll MX = 0;
  for (ll i = 1; i <= 14; i++) {
  	 vector<ll> v2(15);
  	ll sum = 0;
  	if (v1[i] > 0) {
  		ll tmp =v1[i] / 14;
  		for (ll  j = 1; j <= 14; j++) {
  			if (i == j) v2[j] += tmp;
  			else v2[j] = tmp + v1[j];
  		}
  		tmp = v1[i] % 14;
  		ll j;
  		if (i == 14) j = 1;
  		else j = i + 1;
  		while (tmp) {
  			v2[j] += 1;
  			tmp--;
  			if (j == 14) j = 0;
  			j++;
  		}
  	}
  	for (ll k = 1; k <= 14; k++) {
  		if (v2[k] % 2 == 0) sum += v2[k];
  	}
  	MX = max(MX, sum);
  }

  cout << MX << endl;

 	return 0;
}