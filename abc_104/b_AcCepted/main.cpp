#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  if ( s[0] != 'A' ) {
    cout << "WA" << endl;
    return 0;
  }
  int c_cnt = 0;
  int len = s.size();

  for ( int i = 1; i < len; i++ ) {
    if ( isupper( s[i] ) ) {
      if (  i > 1 && i < len - 1  && s[i] == 'C' )
        c_cnt++;
      else {
        cout << "WA" << endl;
        return 0;
      }
    }
  }
  if ( c_cnt != 1 ) {
    cout << "WA" << endl;
    return 0;
  }
  cout << "AC" << endl;
  return 0;
}
