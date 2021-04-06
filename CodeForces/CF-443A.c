#include <stdio.h>
#include <string.h>

int A[1060];

int main()
{
    char S[1050];
    int i, count = 0, len;
    gets(S);

    len = strlen(S);
    for (i = 0; i < len; i++) {
        A[S[i]] = 1;
    }

    for (i = 97; i <=122; i++) {
        if (A[i] == 1)
            count++;
    }

    printf("%d\n", count);

    return 0;

}
