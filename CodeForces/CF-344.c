#include <stdio.h>

int main()
{
    int A[100000],i, n, count = 1;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n-1; i++) {
        if (A[i] != A[i+1]) count++;

    }

    printf("%d\n",count);
    return 0;
}
