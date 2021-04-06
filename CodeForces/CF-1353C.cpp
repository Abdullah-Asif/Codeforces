
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,k,n,i,j,t,m, x, y, z;
    cin>>t;
    while(t--)
    {
        cin>>n;
        i=1;
        x = 8;
        z =0;
        y =((n*n)-1);

        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        else if(y == x)
        {
            cout<<"8"<<endl;
            continue;
        }
        d=0;
        while(y!=d)
        {
            z += x * i;
            d+= x;
            i++;
            x = 8 * i;
        }
        cout<< z <<endl;

    }

   return 0;
}
