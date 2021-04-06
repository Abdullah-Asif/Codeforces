#include <stdio.h>

int main()
{

    unsigned long long int a,b;
    int i,j,t, flag;
    scanf("%d", &t);
    for (i = 1; i <= t; i++) {
        scanf("%llu %llu", &a, &b);
        if ((a+b) % 3 == 0) printf("YES\n");
         else printf("NO\n");
    }


    return 0;
}
