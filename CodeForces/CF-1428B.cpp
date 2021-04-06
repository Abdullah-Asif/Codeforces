
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int t;
  cin >> t;
  while (t--) {
  	int n;
    cin >> n;
		string s;
	  cin >> s;	
		bool hasCW = false;
		bool hasACW = false;
		for (int i = 0; i < n; i++){
			if (s[i] == '<') hasCW = true;
			if (s[i] == '>') hasACW = true;
		}
		if (hasCW && hasACW){
			int ans = 0;
			s += s[0];
			for (int i = 0;i < n;i++){
				if (s[i] == '-' || s[i+1] == '-') ans++;
			}
			cout << ans << "\n";
		}
		else{
			cout << n << "\n";
		}
  }
  return 0;
}
