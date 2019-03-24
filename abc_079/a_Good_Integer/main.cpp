#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int counter = 0;
  for( int i = 0; i < 3; i++ ) {
    if( s[i] == s[i + 1] )
      counter += 1;
    else if( counter < 2 )
      counter = 0;
  }
  if( counter >= 2 )
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
