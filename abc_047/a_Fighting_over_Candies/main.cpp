#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if( a + b + c == max( { a, b, c } ) * 2 )
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
