#include <iostream>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  if ( A >= ( N % 500 ) )
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
