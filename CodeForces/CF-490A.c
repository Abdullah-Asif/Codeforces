#include <stdio.h>

int main()
{
    int n, A[5010],B[5010],C[5010], i,ans, count1 = 0, count2 = 0, count3 = 0, x = 0, y = 0, z = 0;

    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 1) count1++;
        else if (a[i] == 2) count2++;
        else if (a[i] == 3) count3++;
    }

    if (count1 <= count2 && count1 <= count3) {
        ans = count1;
        printf("%d\n", ans);
    }
    else if (count2 <= count1 && count2 <= count3){
        ans = count2;
        printf("%d\n", count2);
    }
    else if (count3 <= count2 && count3 <= count1) {
            ans = count3;
            printf("%d\n", count3);
    }

    for (i = 0; i < n; i++) {
        if (a[i] == 1) {
            A[x] = i + 1;
            x++;
        }
        else if (a[i] == 2) {
            B[y] = i + 1;
            y++;
        }
        else if (a[i] == 3) {
            C[z] = i + 1;
            z++;
        }

    }

    for (x = 0, y = 0, z = 0; x < ans; x++, y++, z++) {
        printf("%d %d %d\n", A[x], B[y], C[z]);
    }

    return 0;

}
