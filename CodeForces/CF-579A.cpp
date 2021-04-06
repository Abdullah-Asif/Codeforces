#include <bits/stdc++.h>
using namespace std;


unsigned countSetBit (int n) {
   unsigned int count = 0;
   while (n) {
      count += n & 1;
      n >>= 1;
   }
   return count;
}

int main() {
   int n;
   cin >> n;
   cout << countSetBit (n);
   cout << endl;
   return 0;
}
