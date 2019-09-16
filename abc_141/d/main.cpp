#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  priority_queue<long long int> que;

  for (int i = 0; i < N; i++) {
    long long int A;
    cin >> A;
    que.push(A);
  }
  for (int j = 0; j < M; j++) {
    long long int highest = que.top();
    que.pop();
    que.push(highest / 2);
  }

  long long int total_price = 0;

  for (int i = 0; i < N; i++) {
    total_price += que.top();
    que.pop();
  }
  cout << total_price << endl;

  return 0;
}
