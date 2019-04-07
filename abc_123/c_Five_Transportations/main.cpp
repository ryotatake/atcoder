#include <bits/stdc++.h>

using namespace std;

int main() {
  long int n, a, b, c, d, e;
  cin >> n >> a >> b >> c >> d >> e;
  long int min_passengers = min( {a, b, c, d, e} );
  cout << 4 + ( n + ( min_passengers - 1 ) ) / min_passengers << endl;
  return 0;
}
