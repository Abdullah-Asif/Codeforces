#include <stdio.h>

int main()
{
    int h[150], a[150], i, j, count = 0, n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d %d", &h[i], &a[i]);
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i != j && h[i] == a[j]) count++;
        }
    }

    printf("%d\n", count);

    return 0;


}
