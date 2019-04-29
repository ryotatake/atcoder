#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int size = s.size();
  int cnt_red = 0, cnt_blue = 0;

  for ( int i = 0; i < size; i++ ) {
    if ( s[i] == '0' ) cnt_red++;
    else cnt_blue++;
  }
  cout << min(cnt_red, cnt_blue) * 2 << endl;
  return 0;
}
