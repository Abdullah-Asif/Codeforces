#include <stdio.h>

int main()
{
  int A[1000000],police = 0, crime = 0, n,i,t;

  scanf("%d", &t);

   for (i = 0; i < t; i++) {
        scanf("%d", &A[i]);

        if (A[i] < 0) {
            if ( police == 0) crime = crime + 1;
            else if (police != 0) police--;

        }
        else if (A[i] > 0) police = police + A[i];

    }
    printf("%d\n", crime);
    return 0;
}
