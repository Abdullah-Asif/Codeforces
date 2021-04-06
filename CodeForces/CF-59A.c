#include <stdio.h>
#include <string.h>

int main()
{
    int lcount = 0, ucount = 0, i, len;

    char s[200];

    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len; i++) {
        if (s[i] >= 65 && s[i] <=90) ucount++;
        else lcount++;
    }

    if (ucount > lcount) printf("%s\n", strupr(s));
    else if (ucount == lcount) printf("%s\n", strlwr(s));
    else printf("%s\n", strlwr(s));

    return 0;

}

