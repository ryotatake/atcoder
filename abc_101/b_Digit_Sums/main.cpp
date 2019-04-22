#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int n;
  cin >> n;
  int sum = 0;
  string s = to_string( n );
  int len = s.length();

  for ( int i = 0; i < len; i++ ) {
    sum += (s[i] - '0');
  }
  if ( n % sum == 0 )
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
