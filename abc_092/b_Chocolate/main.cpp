#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, d, x;
  cin >> n >> d >> x;
  int sum = x;
  for ( int i = 0; i < n; i++ ) {
    int a;
    cin >> a;
    sum += ( d - 1 ) / a + 1;
  }
  cout << sum << endl;
  return 0;
}
