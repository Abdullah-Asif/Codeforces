#include <stdio.h>

int main()
{
    int i, n, b, a, d, sum = 0, count = 0;

    scanf("%d %d %d", &n, &b, &d);

    for (i = 1; i <= n; i++) {
        scanf("%d", &a);
        if (a > b) continue;

        else {
            sum = sum + a;
            if (sum > d) {
                count++;
                sum = 0;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
