#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  if( s[0] == s[1] || s[0] == s[2] || s[1] == s[2] )
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
  return 0;
}
