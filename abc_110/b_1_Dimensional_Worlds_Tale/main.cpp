#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M, X, Y;
  cin >> N >> M >> X >> Y;
  int max_x = -100, min_y = 100;

  for ( int i = 0; i < N; i++ ) {
    int x;
    cin >> x;
    max_x = max( max_x, x );
  }
  for ( int i = 0; i < M; i++ ) {
    int y;
    cin >> y;
    min_y = min( min_y, y );
  }
  if ( max_x < min_y && max_x < Y && X < min_y )
    cout << "No War" << endl;
  else
    cout << "War" << endl;
  return 0;
}
