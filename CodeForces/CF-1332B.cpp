#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
  IOS
  int t;
  cin >> t;
  while (t--) {
    int n, i;
    cin >> n;
    int ara[n], flag = 1,num = 1;
    for (i = 0; i < n; i++) {
      cin >> ara[i];
    }
    flag = 0;
    for (i = 0; i < n; i++) {
      if (ara[i] % 2 == 0) {
        flag = 1;
        ara[i] = num;
      }
    }
    if (flag == 1) num++;
    flag = 0;
    for (i = 0; i < n; i++) {
      if (ara[i] % 3 == 0) {
        flag = 1;
        ara[i] = num;
      }
    }
    if (flag == 1) num++;
    flag = 0;
    for (i = 0; i < n; i++) {
      if (ara[i] % 5 == 0) {
        flag = 1;
        ara[i] = num;
      }
    }
    if (flag == 1) num++;
    flag = 0;
    for (i = 0; i < n; i++) {
      if (ara[i] % 7 == 0) {
        flag = 1;
        ara[i] = num;
      }
    }
    if (flag == 1) num++;
    flag = 0;
    for (i = 0; i < n; i++) {
      if (ara[i] % 11 == 0) {
        flag = 1;
        ara[i] = num;
      }
    }
    if (flag == 1) num++;
    flag = 0;
    for (i = 0; i < n; i++) {
      if (ara[i] % 13 == 0) {
        flag = 1;
        ara[i] = num;
      }
    }
    if (flag == 1) num++;
    flag = 0;
    for (i = 0; i < n; i++) {
      if (ara[i] % 17 == 0) {
        flag = 1;
        ara[i] = num;
      }
    }
    if (flag == 1) num++;
    flag = 0;
    for (i = 0; i < n; i++) {
      if (ara[i] % 19 == 0) {
        flag = 1;
        ara[i] = num;
      }
    }
    if (flag == 1) num++;
    flag = 0;
    for (i = 0; i < n; i++) {
      if (ara[i] % 23 == 0) {
        flag = 1;
        ara[i] = num;
      }
    }
    if (flag == 1) num++;
    flag = 0;
    for (i = 0; i < n; i++) {
      if (ara[i] % 29 == 0) {
        flag = 1;
        ara[i] = num;
      }
    }
    if (flag == 1) num++;
    flag = 0;
    for (i = 0; i < n; i++) {
      if (ara[i] % 31 == 0) {
        flag = 1;
        ara[i] = num;
      }
    }
    set <int> s;
    for (auto it : ara)
      s.insert(it);
    cout << s.size() << endl;
    for (auto it : ara)
      cout << it << ' ';
    cout << endl;
  }
  return 0;
}

//for (i = 0; i < n; i++) {
//    for (int x = 2; x * x <= ara[i]; x++) {
//      if (ara[i] % x == 0) {
//        ara[i] = x;
//        break;
//      }
//    }
//  }
