#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  double total = 0;
  double x[n];
  string u[n];

  for( int i = 0; i < n; i++ ) {
    cin >> x[i] >> u[i];
    if( u[i] == "JPY" )
      total += x[i];
    else
      total += x[i] * 380000;
  }
  cout << total << endl;
  return 0;
}
