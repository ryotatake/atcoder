#include <bits/stdc++.h>

using namespace std;

long long dp(int N, int h[]) {
  long long c[N + 1];
  c[1] = 0;
  c[2] = c[1] + abs(h[2] - h[1]);
  for (int i = 3; i <= N; i++) {
    c[i] = min(c[i - 1] + abs(h[i] - h[i - 1]), c[i - 2] + abs(h[i] - h[i - 2]));
  }
  return c[N];
}

int main()
{
  int N; cin >> N;
  int h[N + 1];

  for (int i = 1; i <= N; i++) {
    cin >> h[i];
  }
  cout << dp(N, h) << endl;
  return 0;
}
