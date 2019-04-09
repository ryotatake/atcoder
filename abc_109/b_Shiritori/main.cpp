#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<string> v;

  string w1;
  cin >> w1;
  v.push_back( w1 );

  for ( int i = 0; i < N - 1; i++ ) {
    string w;
    cin >> w;
    string last_w = v.back();
    if ( w[0] == last_w.back() ) {
      for ( int j = 0; j < v.size(); j++ ) {
        if ( v[j] == w ) {
          cout << "No" << endl;
          return 0;
        }
      }
      v.push_back( w );
    }
    else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
