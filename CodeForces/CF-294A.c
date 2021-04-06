#include <stdio.h>

int main()
{
    int n, A[200], m, x, y, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &m);
    for (j = 1; j <= m; j++) {
        scanf("%d %d", &x, &y);
        if (x == 1) {
            A[x+1] = A[x+1] + A[x] - y;
            A[x] = 0;
        }
        else {
            A[x-1] = A[x-1] + (y-1);
            A[x+1] = A[x+1] + A[x] - y;
            A[x] = 0;
        }
    }

    for (i = 1; i <= n; i++) {
        printf("%d\n", A[i]);
    }

    return 0;
}
