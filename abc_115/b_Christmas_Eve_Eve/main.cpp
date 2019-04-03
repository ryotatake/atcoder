#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  int p_max = 0;
  for( int i = 0; i < n; i++ ) {
    int p;
    cin >> p;
    p_max = max( p_max, p );
    sum += p;
  }
  cout << sum - p_max / 2 << endl;
  return 0;
}
