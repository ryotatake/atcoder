#include <bits/stdc++.h>

using namespace std;

int main() {
  double ans;
  double N;
  cin >> N;

  if ((int)N % 2 == 0) {
    ans = 0.5;
  } else {
    ans = (N + 1) / (2 * N);
  }

  cout << ans << endl;
  return 0;
}

