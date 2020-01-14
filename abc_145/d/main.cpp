#include <bits/stdc++.h>

using namespace std;

long long int factorial(long long int n) { 
  long long int m; 
  if (n == 0) { 
    return 1; 
  } else { 
    m = factorial(n - 1); 
    return n * m; 
  } 
} 

int main() {
  long long int X, Y; cin >> X >> Y;
  long long int a, b;
  if ((X * 2 - Y) % 3 != 0) {
    cout << 0 << endl;
    return 0;
  }
  b = (X * 2 - Y) / 3;
  a = X - b * 2;
  cout << (factorial(a + b) / factorial(a) / factorial(b)) % (long long int)(pow(10, 9) + 7) << endl;


  return 0;
}
