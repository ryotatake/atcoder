#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  if ( n >= m ) {
    cout << 0 << endl;
    return 0;
  }
  vector<int> l;
  for (int i = 0; i < m; i++) {
    int a;
    cin >> a;
    l.push_back(a);
  }
  sort(l.begin(), l.end());
  vector<int> d_l;
  for (int i = 0; i < m - 1; i++) {
    d_l.push_back(l[i + 1] - l[i]);
  }
  sort(d_l.begin(), d_l.end());

  int sum = 0;
  for (int i = 0; i < n - 1; i++) {
    sum += d_l[m - 2 - i];
  }
  int l_last = l[m - 1] - l[0];
  cout << l_last - sum << endl;
  return 0;
}
