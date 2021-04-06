#include <stdio.h>

int main()
{
    int n, k, i, j;
    char A[200];
    scanf("%d %d", &n, &k);

    for (j = 0, i = 97; j < k; i++, j++) {
        A[j] = i;
    }

    for (i = 0, j = 0; i < n; i++, j++) {
        if (j == k) j = 0;
        printf("%c", A[j]);

    }

    return 0;


}
