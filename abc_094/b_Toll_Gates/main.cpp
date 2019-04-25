#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, x;
  cin >> n >> m >> x;
  int cnt = 0;
  bool flag = true;
  while ( flag ) {
    int a;
    cin >> a;
    if ( a < x ) cnt++;
    else flag = false;
  }
  cout << min( cnt, m - cnt ) << endl;

  return 0;
}
