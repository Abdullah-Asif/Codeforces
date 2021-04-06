#include <stdio.h>

int main()
{
    int i, A = 0, D = 0, n;
    char s[1000050];

    scanf("%d", &n);
    scanf("%s", s);

    for (i = 0; i < n; i++) {

        if (s[i] == 'A') {
             A++;
        }
        else if (s[i] == 'D') {
            D++;
        }

    }


    if (A > D) printf("Anton\n");

    else if(D > A) printf("Danik\n");

    else  printf("Friendship\n");

    return 0;

}
