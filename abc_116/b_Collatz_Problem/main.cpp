#include <bits/stdc++.h>

using namespace std;

int main() {
  int s;
  cin >> s;
  vector<int> v;
  v.push_back( s );
  int i = 1;
  bool flag = 1;

  while( flag ) {
    int a;
    int latest = v.back();
    if( latest % 2 == 0 ) {
      a = latest / 2;
    }
    else {
      a = 3 * latest + 1;
    }
    for( int j = 0; j < v.size(); j++ ) {
      if( v[j] == a ) {
        cout << i + 1 << endl;
        flag = 0;
        break;
      }
    }
    v.push_back( a );
    i++;
  }
  return 0;
}
