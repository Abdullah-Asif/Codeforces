#include <stdio.h>

int main()
{
    int A[150], n,j , i, temp;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1 -i; j++) {
            if (A[j] > A[j+1]) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    for(i = 0; i < n-1; i++) {
        printf("%d ", A[i]);
    }
    printf("%d\n",A[n-1]);
    return 0;

}
