#include <stdio.h>

long long int A[2050];
int main(){

     long long int n, s, k, i, j, S[2000];
    int  count1, count2, flag1 = 1, t, flag2 = 1, p;


    scanf("%d", &t);
    for (p = 1; p <= t; p++) {

        scanf("%lld %lld %lld",&n, &s, &k);
        count1 = 1;
        count2 = 1;
        flag1 = 1;
        flag2 = 1;

        for (i = 0; i < k; i++) {
            scanf("%lld", &S[i]);
            A[S[i]] = 1;

        }
//        for(i = 1; i <= n; i++) {
//            printf("%llu ", A[i]);
//        }

        if (A[s] == 0) {
            printf("%d\n",0);

        }
        else {


            for (i = s + 1; i <= n; i++) {

                if (A[i] == 0){
                    flag1 = 0;
                    break;
                }
                else count1++;
            }
            //printf("count1 = %d\n", count1);


            for (i = s-1; i >= 1; i--) {

                if(A[i] == 0) {
                    flag2 = 0;
                    break;
                }
                else count2++;
            }

            //printf("count2 = %d\n", count2);



            if(flag2 == 1) printf("%d\n", count1);
            else if (flag1 == 1) printf("%d\n", count2);

            else  {
                if (count1 <= count2) printf("%d\n", count1);
                else printf("%d\n", count2);
            }

        }
        for(i = 0; i < 2050; i++) {
                A[i] = 0;
            }
    }
    return 0;

}
