#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve(){
    int n,k;
    cin >> n >> k;
        int count1 = 0;
    int count2 = 0;
    int x,y;
      while(n--){
        cin >> x >> y;
        if(x==y){
         count1++;
        }else if(x!=y && x!=0 && !(y>0) || x>0 && y>0){
         count2++;
      }
    }
  if(count1>count2){
    cout << -1 << endl;
  }else if(count1<count2){
  cout << 1 << endl;
  }

}
int main()
{	
	freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
   int t;
   cin >> t;
   while(t--){
    solve();
   }
}