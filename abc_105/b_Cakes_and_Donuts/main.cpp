#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int max4 = n / 4 + 1;
  int max7 = n / 7 + 1;
  for ( int i = 0; i <= max4; i++ ) {
    int left = n - 4 * i;
    if ( left == 0 ) {
      cout << "Yes" << endl;
      return 0;
    }
    for ( int j = 0; j <= max7; j++ ) {
      left -= 7 * j;
      if ( left == 0 ) {
        cout << "Yes" << endl;
        return 0;
      } else if ( left < 0 ) {
        break;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
