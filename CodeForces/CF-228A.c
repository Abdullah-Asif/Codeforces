#include <stdio.h>

int main()
{
    int res = 1;
    int arr[100], i, j, n = 4;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;


        if (i == j)
            res++;
    }
    printf("%d\n", n -res);

    return 0;
}
