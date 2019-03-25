#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> v = { 0 };
  int j = 0;

  for( int i = 0; i < s.size(); i++ ) {
    if( s[i] == 'A' || s[i] == 'T' || s[i] == 'G' || s[i] == 'C' ) {
      v[j] += 1;
    }
    else {
      j++;
      v.push_back( 0 );
    }
  }
  sort( v.begin(), v.end() );
  int max = v.back();
  cout << max << endl;
  return 0;
}
