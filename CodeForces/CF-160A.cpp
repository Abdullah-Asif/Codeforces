#include <bits/stdc++.h>
using namespace std;
//
//int main()
//{
//   int i, n, half, coins = 0,coinsum = 0, x, sum = 0;
//   vector < int > vec;
//
//   cin >> n;
//
//   for (i = 0; i < n; i++) {
//      cin >> x;
//      vec.push_back(x);
//   }
//
//   sum = accumulate (vec.begin(), vec.end(), sum);
//   half = sum / 2;
//
//   sort (vec.begin(), vec.end());
//   reverse(vec.begin(), vec. end());
//
//   for (i = 0; i < vec.size(); i++) {
//      coinsum = coinsum + vec[i];
//      coins++;
//      if (coinsum > half)
//         break;
//   }
//
//   cout << coins << endl;
//
//   return 0;
//}

int main ()
{
    int n, arr[105], sum = 0, coin = 0,coinsum = 0, i;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    sum = sum / 2;

    sort (arr, arr + n);
    reverse (arr, arr + n);

    for (i = 0; i < n; i++)
    {
        coinsum = coinsum + arr[i];
        coin++;

        if (coinsum > sum)
            break;
    }

    cout << coin << endl;
    return 0;

}


