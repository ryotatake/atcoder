#include <iostream>
using namespace std;

int main() {
  int year, month, day;
  char c1, c2;
  cin >> year >> c1 >> month >> c2 >> day;
  if ( month >= 5 )
    cout << "TBD" << endl;
  else
    cout << "Heisei" << endl;
  return 0;
}
