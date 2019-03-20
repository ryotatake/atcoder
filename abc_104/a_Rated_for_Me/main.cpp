#include <iostream>
#include <string>

using namespace std;

int main() {
  int r;
  string contest;
  cin >> r;
  if( r < 1200 )
    contest = "ABC";
  else if( r >= 1200 && r < 2800 )
    contest = "ARC";
  else
    contest = "AGC";
  cout << contest << endl;
  return 0;
}
