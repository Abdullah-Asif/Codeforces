#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long int n, d, t, flag;

    double  x, opt;

    scanf("%d", &t);
    while (t--) {
        flag = 0;
        scanf ("%lu %lu", &n, &d);

        if (d <= n) printf("YES\n");
        else {

            for (x = 1; x <= n; x++) {
                opt = 0;
                opt = ceil(d/ (x+1));
                opt = opt + x;
                if (opt <= n) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) printf("YES\n");
                else printf("No\n");
        }


    }
    return 0;

}
