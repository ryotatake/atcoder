#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, Q;
  string S;
  cin >> N >> Q >> S;

  for( int i = 0; i < Q; i++ ) {
    int l, r;
    cin >> l >> r;
    string str = S.substr( l - 1, r - l + 1 );

    int counter = 0;
    for( int j = 0; j < str.size(); j++ ) {
      if( str[j] == 'A' && str[j + 1] == 'C' )
        counter++;
    }
    cout << counter << endl;
  }
  return 0;
}
