#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll N;
  cin >> N;
  ll ans = 0;

  for (ll k = 1; k * k <= N; k++) {
    // N = k(m + 1) ( k < m )
    if (N % k == 0) {
      ll m = N / k - 1;
      if (k < m) ans += m;
    }
  }
  cout << ans << endl;
  return 0;
}
