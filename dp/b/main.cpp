#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000000

long long dp(int N, int K, int h[]) {
  long long c[N + 1];
  c[1] = 0;
  c[2] = c[1] + abs(h[2] - h[1]);
  for (int i = 3; i <= N; i++) {
    long long _min = MAX;
    for (int j = 1; j <=K; j++) {
      if (i - j >= 1) _min = min(_min, c[i - j] + abs(h[i] - h[i - j]));
      else break;
    }
    c[i] = _min;
  }
  return c[N];
}

int main()
{
  int N, K; cin >> N >> K;
  int h[N + 1];
  for (int i = 1; i <= N; i++) {
    cin >> h[i];
  }
  cout << dp(N, K, h) << endl;

  return 0;
}
