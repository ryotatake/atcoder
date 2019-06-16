#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  long long K;
  cin >> N >> K;
  long long A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  // 累積和
  long long cum_sum[N];
  cum_sum[0] = A[0];
  for (int i = 1; i < N; i++) {
    cum_sum[i] = cum_sum[i - 1] + A[i];
  }

  long long ans = 0;
  for (int i = 0; i < N; i++) {
    long long now = cum_sum[i];
    if (now >= K) {
      ans++;
      if (now - cum_sum[i / 2] >=K) {
        for (int j = i - 1; j >= 0; j--) {
          if (now - cum_sum[j] >= K) {
            ans += j + 1;
            break;
          }
        }
      } else {
        for (int j = 0; j < i; j++) {
          if (now - cum_sum[j] >= K) {
            ans++;
          } else {
            break;
          }
        }
      }
    }
  }
  cout << ans << endl;

  return 0;
}
