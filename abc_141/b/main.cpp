#include <bits/stdc++.h>

using namespace std;

int main() {
  string S;
  cin >> S;
  bool flag = 1;
  for(int i = 0; i < S.length(); i += 2) {
    if ( S[i] == 'R' || S[i]== 'U' || S[i] == 'D' ) {
    } else {
      cout << "No" << endl;
      return 0;
    }
  }
  for(int i = 1; i < S.length(); i += 2) {
    if ( S[i] == 'L' || S[i]== 'U' || S[i] == 'D' ) {
    } else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

  return 0;
}
