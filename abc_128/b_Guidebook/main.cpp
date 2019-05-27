#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  map<string, vector<pair<int, int>>> mp;

  for (int i = 1; i <= N; i++) {
    string city;
    int point;
    cin >> city >> point;
    mp[city].push_back(make_pair(point, i));
  }

  for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
    auto q = itr->second;
    sort(q.begin(), q.end());
    for (int i = q.size() - 1; i >= 0 ; i--) {
      auto p = q[i];
      cout << p.second << endl;
    }
  }
  return 0;
}
