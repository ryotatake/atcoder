#include <iostream>

using namespace std;

int main() {
  int month, day;
  cin >> month >> day;
  if( month <= day )
    cout << month << endl;
  else
    cout << month - 1 << endl;
  return 0;
}
