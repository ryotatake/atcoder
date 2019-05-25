#include <bits/stdc++.h>

using namespace std;

void algae(int r, int D, int x) {
  for (int i = 0; i < 10; i++) {
    int next_x = r * x - D;
    cout << next_x << endl;
    x = next_x;
  }
}

int main() {
  int r, D, x;
  cin >> r >> D >> x;
  algae(r, D, x);
  return 0;
}
