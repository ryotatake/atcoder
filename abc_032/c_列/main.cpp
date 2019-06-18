#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  long long K;
  cin >> n >> K;

  vector<long long> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  for (int i = 0; i < n; i++) {
    if (a[i] == 0) {
      cout << n << endl;
      return 0;
    }
  }

  // しゃくとり法
  int ans = 0;
  int right = 0;
  long long multi = 1;
  for (int left = 0; left < n; left++) {
    while (right < n && multi * a[right] <= K) {
      multi *= a[right];
      right++;
    }
    ans = max(ans, right - left);
    if (left == right) right++;
    else multi /= a[left];
  }

  cout << ans << endl;
  return 0;
}
