#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  string a = s.substr(0, n/2 - 1);
  string b = s.substr(n/2, (int)s.size());
  if (a == b) { cout << "Yes" << endl; }
  else  { cout << "No" << endl; }

  return 0;
}
