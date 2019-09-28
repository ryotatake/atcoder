#include <bits/stdc++.h>

using namespace std;

int main() {
  int ans = 0;
  int N, K;
  cin >> N >> K;
  for (int i = 0; i < N; i++) {
    int h;
    cin >> h;
    if (h >= K) ans++;
  }
  cout << ans << endl;
  return 0;
}
