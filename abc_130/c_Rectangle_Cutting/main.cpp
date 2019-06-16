#include <bits/stdc++.h>

using namespace std;

int main() {
  long double W, H, x, y;
  cin >> W >> H >> x >> y;
  long double ans = W * H / 2;
  if ( x == W / 2 && y == H / 2 ) {
    cout << ans << " " << 1;
  } else {
    cout << ans << " " << 0;
  }

  return 0;
}
