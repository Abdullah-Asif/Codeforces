#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	IOS
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int d = __gcd(a.length(), b.length());
        string a1, b1;
        for (int i = 0; i < int(b.length()) / d; i++) {
            a1 += a;
        }
        for (int i = 0; i < int(a.length()) / d; i++) {
            b1 += b;
        }
        if (a1 == b1) {
            cout << a1 << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}



