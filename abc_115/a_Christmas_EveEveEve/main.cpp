#include <iostream>
#include <string>

using namespace std;

int main() {
  int d;
  string message;
  cin >> d;
  if ( d == 25 )
    message = "Christmas";
  else if ( d == 24 )
    message = "Christmas Eve";
  else if ( d == 23 )
    message = "Christmas Eve Eve";
  else if ( d == 22 )
    message = "Christmas Eve Eve Eve";
  cout << message << endl;
  return 0;
}
