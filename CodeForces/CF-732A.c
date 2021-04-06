#include <stdio.h>

int main()
{
    int i, k, r,s, count = 1;

    scanf("%d %d", &k, &r);

    for (i = 1; ; i++) {
        s = k * i;

        if ((s % 10 == 0 )|| (s % 10 == r)) {
            break;
        }
        count++;

    }

    printf("%d\n", count);
    return 0;
}
