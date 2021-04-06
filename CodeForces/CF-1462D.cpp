#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int check(vector<int> &A, int sum) {
	int way = 0, val = 0;
	int SZ = A.size();
	int j = 0;
	for (int i = 0; i < SZ; i++) {
		val += A[i];
		if (val == sum) {
			way += (i - j);
			j = i + 1;
			val = 0;
		}
		else if (val > sum) return -1;
	}
	return way;
}

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n;
  	cin >> n;
  	vector <int> A(n);
  	int sum = 0, MX = n-1;
  	for (auto &it : A) {
  		cin >> it;
  		sum += it;
  	}
  	for (int i = 1; i * i <= sum; i++) {
  		if (sum % i == 0) {
  			int part1 = check(A, i);
  			int part2 = check(A, sum/i);
  			if (part1 != -1) MX = min(MX, part1);
  			if (part2 != -1) MX = min(MX, part2);
  		}
  	}
  	cout << MX << endl;
  }

 	return 0;
}