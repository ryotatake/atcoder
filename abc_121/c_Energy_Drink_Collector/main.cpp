#include <bits/stdc++.h>
#include <map>

using namespace std;

int main() {
  long long int n, m;
  cin >> n >> m;
  multimap<long long int, long long int> mp;
  long long int sum = 0;

  for ( int i = 0; i < n; i++ ) {
    long long int a, b;
    cin >> a >> b;
    mp.insert(pair<long long int, long long int>(a, b));
  }
  for ( const auto& e : mp ) {
    if ( m >= e.second ) {
      sum += e.first * e.second;
      m -= e.second;
      if ( m == 0 ) break;
    }
    else {
      sum += e.first * m;
      break;
    }
  }
  cout << sum << endl;
  return 0;
}
