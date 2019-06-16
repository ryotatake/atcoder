#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int min_id = 1, max_id = 100000;
  for (int i = 0; i < M; i++) {
    int L, R;
    cin >> L >> R;
    min_id = max(min_id, L);
    max_id = min(max_id, R);
  }

  cout << max(0, max_id - min_id + 1) << endl;
  return 0;
}
