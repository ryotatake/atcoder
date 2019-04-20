#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  string r = s + s;
  int len = s.size();
  for ( int i = 0; i < len; i++ ) {
    if ( t == r.substr(i, len) ) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
