#include <bits/stdc++.h>

using namespace std;

double getDistance(pair<int, int> a, pair<int, int> b) {
  int xdiff = a.first - b.first;
  int ydiff = a.second - b.second;
  return sqrt((double)pow(xdiff, 2) + (double)pow(ydiff, 2));
}

int main() {
  int N; cin >> N;
  pair<int, int> Towns[N];

  for (int i = 0; i < N; i++) {
    pair<int, int> town;
    cin >> town.first >> town.second;
    Towns[i] = town;
  }

  double total_distance = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) {}
      else {
        total_distance += getDistance(Towns[i], Towns[j]);
      }
    }
  }

  std::cout << std::fixed;
  cout << std::setprecision(6) << total_distance / N << endl;
  return 0;
}
