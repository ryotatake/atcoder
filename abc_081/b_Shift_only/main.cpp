#include <iostream>
using namespace std;

int main() {
  int N;
  int A[210];
  cin >> N;
  for( int i = 0; i < N; i++ ) cin >> A[i];

  int counter = 0;
  int flag = 1;

  while( 1 ) {
    for( int i = 0; i < N; i++ ) {
      if( A[i] % 2 != 0 ) {
        flag = 0;
        break;
      } else {
        A[i] /= 2;
      }
    }
    if( !flag ) {
      break;
    } else {
      counter++;
    }
  }
  cout << counter << endl;
  return 0;
}
