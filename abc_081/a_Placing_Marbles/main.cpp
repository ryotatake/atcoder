#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  int counter;

  for( int i = 0; i < 3; i++ ) {
    if( s[i] == '1' )
      counter++;
  }
  cout << counter << endl;
  return 0;
}
