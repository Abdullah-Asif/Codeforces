#include<stdio.h>
#include <string.h>


int main() {

    char s[100], t [100],count = 1;

    int i, lens, lent, j;

    scanf("%s %s", s, t);

    lens = strlen (s);
    lent = strlen (t);

    for (i = 0, j = 0; i < lens, j < lent; j++) {
        if (s[i] == t[j]) {
             count++;
             i++;
        }

    }
    printf("%d\n",count);

    return 0;

}

