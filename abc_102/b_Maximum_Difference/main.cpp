#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a, a_min, a_max;
  cin >> a;
  a_max = a;
  a_min = a;

  for ( int i = 0; i < n - 1; i++ ) {
    int b;
    cin >> b;
    a_max = max(a_max, b);
    a_min = min(a_min, b);
  }
  cout << a_max - a_min << endl;
  return 0;
}
