#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int a, b, k;
  cin >> a >> b >> k;
  if ( b - a <= k * 2 - 1 ) {
    for ( int i = a; i <= b; i++ ) {
      cout << i << endl;;
    }
    return 0;
  }
  for ( int i = a; i <= a + k - 1; i++ ) {
    cout << i << endl;
  }
  for ( int i = b - k + 1; i <= b; i++ ) {
    cout << i << endl;
  }
  return 0;
}
