#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k, m;
  cin >> n >> k >> m;

  int total = 0;
  for (int i = 0; i < n - 1; i++) {
    int a;
    cin >> a;
    total += a;
  }

  int diff = n * m - total;
  int ans;
  if (diff <= 0) ans = 0;
  else if (diff <= k) ans = diff;
  else ans = -1;

  cout << ans << endl;

  return 0;
}
