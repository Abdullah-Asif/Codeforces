#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n, d;
  cin >> n >> d;
  vector < pair <ll, ll> > vc(n);
  vector <ll> csum(n);
  for (int i = 0; i < n; i++) {
  	ll a, b;
  	cin >> a >> b;
  	vc[i].first = a, vc[i].second = b;
  }
  sort(vc.begin(), vc.end());
  	csum[0] = vc[0].second;
  	int start = 0;
  	for (int i = 1; i < n; i++) {
  		if ((vc[i].first - vc[start].first) < d) {
  			csum[i] = csum[i-1] + vc[i].second;
  		}
  		else {
  			int j = i - 1;
  			csum[i] = vc[i].second;
  			while ((vc[i].first - vc[j].first) < d && j >= start) {
  				csum[i] += vc[j].second;
  				j--;
  			}
  			start = j + 1;
  		}
  	}
  	cout << *max_element(csum.begin(), csum.end()) << endl;
  return 0;
}
