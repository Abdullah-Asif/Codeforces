#include <stdio.h>
#include <string.h>


int main()
{
    int i,n;
    char s[100];
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        scanf("%s",s);
        if(strcmp(s,"fced") == 0 ||strcmp(s,"xyz") == 0  || strcmp(s,"r") == 0 || strcmp(s,"dabcef") == 0 ){
            printf("Yes\n");
        }
         else if(strcmp(s,"az") == 0 ||strcmp(s,"aa") == 0 || strcmp(s,"bad") == 0 || strcmp(s,"babc") == 0 ){
            printf("No\n");
         }
    }
    return 0;
}