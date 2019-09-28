#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  int A[N + 1];

  for (int i = 1; i <= N; i++) {
    int a;
    cin >> a;
    A[a - 1] = i;
  }
  for (int j = 0; j < N; j++) {
    cout << A[j] << ' ';
  }
  cout << endl;
  return 0;
}
