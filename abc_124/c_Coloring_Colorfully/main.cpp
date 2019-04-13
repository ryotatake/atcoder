#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int length = s.size();
  int odd_0 = 0, odd_1 = 0, even_0 = 0, even_1 = 0;
  for ( int i = 0; i < length; i++ ) {
    if ( i % 2 == 0 ) {
      if ( s[i] == '0' )
        even_0++;
      else
        even_1++;
    }
    else
    {
      if ( s[i] == '0' )
        odd_0++;
      else
        odd_1++;
    }
  }
  cout << min( even_0 + odd_1, even_1 + odd_0 ) << endl;
  return 0;
}
