#include <bits/stdc++.h>
using namespace std;

int main ()
{
   vector < pair < int, int > > vec;
   int i, n;

   cin >> n;
   vec.resize(n);

   for (i = 0; i < n; i++) {
      cin >> vec[i].first;
      vec[i].second = i+1;
   }

   sort(vec.begin(),vec.end());

   for (i = 0; i < n; i++) {
      cout << vec[i].second;
      if (i != n-1) {
          cout << ' ';
      }
   }
   cout << endl;

   return 0;
}

