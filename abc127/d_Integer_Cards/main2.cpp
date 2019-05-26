#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  priority_queue<pair<int, int>> q;

  for (int i = 0; i < N; i++) {
    int card_num;
    cin >> card_num;
    q.push(make_pair(card_num, 1));
  }
  for (int i = 0; i < M; i++) {
    int card_num, number_of_sheet;
    cin >> number_of_sheet >> card_num;
    q.push(make_pair(card_num, number_of_sheet));
  }

  long long ans = 0;
  for (int i = 0; i < N; i++) {
    auto biggest_pair = q.top();
    q.pop();
    ans += biggest_pair.first;
    if (biggest_pair.second > 1) {
      biggest_pair.second--;
      q.push(biggest_pair);
    }
  }
  cout << ans << endl;
  return 0;
}
