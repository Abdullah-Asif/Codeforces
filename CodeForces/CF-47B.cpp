#include <bits/stdc++.h>

using namespace std;

int main() {
   int i, A = 0, B = 0, C = 0;
   string s;
   for (i = 0; i < 3; i++) {
      cin >> s;
      if((s[0] == 'A' && s[1] == '>') || (s[2] == 'A' && s[1] == '<'))
         A++;
      if((s[0] == 'B' && s[1] == '>') || (s[2] == 'B' && s[1] == '<'))
         B++;
      if((s[0] == 'C' && s[1] == '>') || (s[2] == 'C' && s[1] == '<'))
         C++;
   }
   if (A == 2) {
      if (B == 1) s = "CBA";
      else s = "BCA";
      cout << s << endl;
   }
   else if (B == 2) {
      if (A == 1) s = "CAB";
      else s = "ACB";
      cout << s << endl;
   }
   else if (C == 2) {
      if (A == 1) s = "BAC";
      else s = "ABC";
      cout << s << endl;
   }
   else cout << "Impossible\n";

   return 0;
}
