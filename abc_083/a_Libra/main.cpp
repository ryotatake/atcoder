#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if ( a + b - c - d > 0 ) {
    cout << "Left" << endl;
  }
  else if ( a + b - c - d == 0 ) {
    cout << "Balanced" << endl;
  }
  else
    cout << "Right" << endl;
  return 0;
}
