#include <iostream>
using namespace std;

int main() {
  int a, b, c, max;
  cin >> a >> b >> c;

  max = b / a;
  if ( c <= max )
    cout << c << endl;
  else
    cout << max << endl;
  return 0;
}
