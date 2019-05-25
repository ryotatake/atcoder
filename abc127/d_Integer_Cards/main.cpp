#include <bits/stdc++.h>

using namespace std;

struct Card{
  int num;
  int integer;
};

bool compare(const Card &a, const Card &b) {
  return a.integer > b.integer;
}

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> cards(N);
  for (int i = 0; i < N; i++) cin >> cards[i];
  vector<Card> c(M);
  for (int i = 0; i < M; i++) {
    int B, C;
    cin >> B >> C;
    c[i].num = B;
    c[i].integer = C;
  }
  sort(cards.begin(), cards.end());
  sort(c.begin(), c.end(), compare);

  for (int i = 0; i < M; i++) {
    int integer = c[i].integer;
    if (integer < cards.front()) break;
    for (int j = 0; j < c[i].num; j++) {
      if (integer > cards[j]) {
        cards[j] = integer;
      } else {
        break;
      }
    }
    sort(cards.begin(), cards.end());
  }
  long long int ans = 0;
  for (int i = 0; i < N; i++) {
    ans += cards[i];
  }
  cout << ans << endl;
  return 0;
}

/* TLE */
