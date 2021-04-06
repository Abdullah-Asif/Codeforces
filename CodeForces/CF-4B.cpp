#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

int main() {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int d, time;
  cin >> d >> time;
  int MN = 0, MX = 0;
  int A[d], B[d];
  for (int i = 0; i < d; i++) {
  	cin >> A[i] >> B[i];
  	MN += A[i], MX += B[i];
  }
  if (time < MN || time > MX) cout << "NO" << endl;
  else {
  	cout << "YES" << endl;
  	int tmp = time - MN;
  	for (int i = 0; i < d; i++) {
  		if (i > 0) cout << ' ';
  		if (tmp > (B[i] - A[i])) {
  			cout << B[i];
  			tmp -= (B[i] - A[i]);
  		}
  		else {
  			cout << A[i] + tmp;
  			tmp = 0;
  		}
  	}
  }
  return 0;
}




// #include <bits/stdc++.h>
// using namespace std;


// int a[33],b[33];
// int main(){
// 	 	freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
//     int n,d,mi=0,ma=0,u=0,i;
//     scanf("%d%d",&n,&d);
//     for(i=0;i<n;i++){
//         scanf("%d%d",&a[i],&b[i]);
//         mi+=a[i];
//         ma+=b[i];
//     }
//     if(d<mi||d>ma)puts("NO");
//     else{
//         puts("YES");
//         u=d-mi;
//         cout << d << ' ' << mi << endl;
//         cout << u << endl;
//         for(i=0;i<n;i++){
//             if(i)putchar(' ');
//             if(u>b[i]-a[i]){
//                 printf("%d",b[i]);
//                 u-=b[i]-a[i];
//             }
//             else{
//                 printf("%d",a[i]+u);
//                 u=0;
//             }
//         }
//         puts("");
//     }
// }
