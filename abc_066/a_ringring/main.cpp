#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> v{ a, b, c };
  sort( v.begin(), v.end() );
  cout << v[0] + v[1] << endl;
  return 0;
}
