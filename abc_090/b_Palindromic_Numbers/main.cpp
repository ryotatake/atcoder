#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int ans = 0;
  int diff = b - a;

  for (int i = 0; i <= diff; i++) {
    int num = a + i;
    int ones_place = num % 10;
    int tens_place = num / 10 % 10;
    int thousands_place = num / 1000 % 10;
    int ten_thousands_place = num / 10000 % 10;
    if (ones_place == ten_thousands_place && tens_place == thousands_place)
      ans++;
  }
  cout << ans << endl;
  return 0;
}
