#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, Q;
  long long int K;
  cin >> N >> K >> Q;
  int ary[N];
  for (int i = 0; i < N; i++) {
    ary[i] = K - Q;
  }
  for (int i = 0; i < Q; i++) {
    int a;
    cin >> a;
    ary[a - 1]++;
  }
  for (int i = 0; i < N; i++) {
    if (ary[i] > 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
