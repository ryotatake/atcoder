#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  int L[N];
  for (int i = 0; i < N; i++) {
    cin >> L[i];
  }

  int D = 0;
  bool flag = 1;
  for (int i = 2; i <= N + 1; i++) {
    D = D + L[i - 2];
    if (D > X) {
      cout << i - 1 << endl;
      flag = 0;
      break;
    }
  }

  if (flag) {
    cout << N + 1 << endl;
  }
  return 0;
}
