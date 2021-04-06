#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, i, j, a, b, c, d, minimum, maximum, xmin, xmax;
   cin >> n;
   int arr[n];
   //int arr[] = {-5, -2, 2, 7};

   for (i = 0; i < n; i++) {
      cin >> arr[i];
   }

   xmin = *min_element(arr, arr+n);
   xmax = *max_element(arr, arr+n);

   for (i = 0; i < n; i++) {
      a = 0, b = 0, minimum = 0, maximum = 0;
      if (i == 0) {
         maximum =  abs (arr[i] - xmax);
         cout << abs(arr[i] - arr[i+1]) << ' ' << maximum << endl;


      }
      else if (i == n-1 ){
         maximum =  abs (arr[i] - xmin);
         cout << abs(arr[i] - arr[i-1]) <<' ' << maximum << endl;
      }
      else {
         a = abs (arr[i] - arr[i+1]);
         b = abs (arr[i] - arr[i-1]);
         minimum = min(a,b);
         c = abs (arr[i] - xmin);
         d = abs (arr[i] - xmax);
         maximum = max(c,d);
         cout << minimum << ' ' << maximum << endl;
      }
   }

//   cout << *max_element(arr, arr+n) << endl;;
//   cout << *min_element(arr, arr+n) << endl;


   return 0;
}
