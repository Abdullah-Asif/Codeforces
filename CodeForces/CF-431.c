#include <stdio.h>
#include <string.h>

int main()
{
    long long int a, b, c, d;
    char A[1000000];
    int count1 = 0, count2= 0, count3 = 0, count4 = 0, i;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    scanf("%s", A);

    int len = strlen(A);

    for (i = 0; i < len; i++) {
        if (A[i] == '1') count1++;
        else if (A[i] == '2') count2++;
        else if (A[i] == '3') count3++;
        else if (A[i] == '4') count4++;
    }

    printf("%lld\n",(a * count1) + (b * count2) + (c * count3) + (d * count4));
    return 0;

}
