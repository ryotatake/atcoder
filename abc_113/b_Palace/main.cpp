#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, T, A;
  cin >> N >> T >> A;
  double min_diff = 100000;
  int palace;

  for ( int i = 0; i < N; i++ ) {
    int H;
    cin >> H;
    double diff = abs( T - H * 0.006 - A );
    if ( min_diff > diff ) {
      min_diff = diff;
      palace = i + 1;
    }
  }
  cout << palace << endl;

  return 0;
}
