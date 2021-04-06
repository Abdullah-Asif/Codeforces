#include <bits/stdc++.h>
using namespace std;

//int A[100050];

int main()
{
   int i, n, B[100020], coun = 0, mini, maxi;
   cin >> n;

   for (i = 0; i < n; i++) {
      cin >> B[i];
   }

   mini = *min_element(B, B + n);
   maxi = *max_element(B, B + n);

   for (i = 0; i < n; i++) {
      if (B[i] > mini && B[i] < maxi)
         coun++;
   }

   cout << coun << endl;

}
//
//int main()
//{
//    int res = 0;
//    int arr[100050], i, j, n;
//
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//
//    /// Pick all elements one by one
//
//
//    for (int i = 0; i < n; i++) {
//        for (j = 0; j < i; j++) {
//            if (arr[i] == arr[j]) {
//
//                break;
//            }
//        }
//
//        /// If not printed earlier, then print it
//        if (i == j)
//            res++;
//
//    }
//    printf("%d\n", res-2);
//
//    return 0;
//}
