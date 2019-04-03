#include <bits/stdc++.h>

using namespace std;

int main() {
  string S;
  cin >> S;
  int min_num = 999;

  for ( int i = 0; i < S.size() - 2; i++ ) {
    string partial = S.substr( i, 3 );
    int num = atoi( partial.c_str() );
    int num_abs = abs( num - 753 );
    min_num = min( num_abs, min_num );
  }
  cout << min_num << endl;
  return 0;
}
