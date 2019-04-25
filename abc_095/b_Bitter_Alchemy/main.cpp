#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  int min_m;
  cin >> min_m;
  x -= min_m;
  for ( int i = 0; i < n - 1; i++ ) {
    int m;
    cin >> m;
    x -= m;
    min_m = min( min_m, m );
  }
  int cnt = 0;
  bool flag = true;
  while( flag ) {
    x -= min_m;
    if ( x >= 0 ) cnt++;
    else flag = false;
  }
  cout << n + cnt << endl;
  return 0;
}
