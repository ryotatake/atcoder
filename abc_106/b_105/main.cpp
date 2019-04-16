#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;

  for ( int i = 1; i <= n; i += 2 ) {
    int counter = 0;
    for ( int j = 1; j <= i; j += 2 ) {
      if ( i % j == 0 ) counter++;
    }
    if ( counter == 8 ) ans++;
  }
  cout << ans << endl;

  return 0;
}
