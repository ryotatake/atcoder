#include <bits/stdc++.h>

using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b >> c;
  string ans = "";
  ans.push_back( a[0] );
  ans.push_back( b[0] );
  ans.push_back( c[0] );
  transform( ans.cbegin(), ans.cend(), ans.begin(), ::toupper );
  cout << ans << endl;
  return 0;
}
