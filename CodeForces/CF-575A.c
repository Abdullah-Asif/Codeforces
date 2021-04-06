#include <stdio.h>

int main()
{
    long long int n,a,b,c,i,s;

    scanf("%lld",&n);

    for(i = 1; i <= n; i++){
        scanf("%lld %lld %lld",&a,&b,&c);
        s = a + b + c;
        if(s % 2 == 0){
            printf("%lld\n",s / 2);
        }
        else if(s % 2 == 1){
            printf("%lld\n",(s - 1)/2);
        }

    }

    return 0;
}
