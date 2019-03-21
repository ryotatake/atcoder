#include <iostream>
using namespace std;

int main() {
  int counter = 0;
  string s;
  cin >> s;
  for( int i = 0; i < 4; i++ ) {
    if( s[i] == '+' )
      counter += 1;
    else
      counter -= 1;
  }
  cout << counter << endl;
  return 0;
}
