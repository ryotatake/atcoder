#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> l;
  for( int i = 0; i < n; i++ ) {
    cin >> l[i];
  }
  sort( l.begin(), l.end() );
  int max = l[n - 1];
  int others = 0;
  for( int i = 0; i < n - 1; i++ )
    others += l[i];
  if( max > others )
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
