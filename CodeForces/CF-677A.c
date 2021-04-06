#include <stdio.h>

int main()
{
    int ara[1050], h, n, i, width = 0;

    scanf("%d %d", &n, &h);

    for (i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
        if(ara[i] <= h) width = width + 1;
        else width = width + 2;
    }
    printf("%d\n", width);

    return 0;

}
