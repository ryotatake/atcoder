#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> switches(N);
  for (int i = 0; i < M; i++) {
    int switch_size;
    cin >> switch_size;
    for (int j = 0; j < switch_size; j++) {
      int switch_number;
      cin >> switch_number;
      switch_number--;  // インデックスを0から始める。
      switches[switch_number] |= 1 << i;    // 1 << i でシフト演算。1 << 2なら 100を表す。
                                            // |はビット演算のor 1000 | 100 = 1100
                                            // 下からi番目の桁に1を入れる
                                            // 最終的に各スイッチの電球の対応状況が1,0で入る
    }
  }
  int remainder = 0;
  for (int i = 0; i < M; i++) {
    int x;
    cin >> x;
    remainder |= x << i;       // 下からi番目の桁に1, 0を入れる。
  }

  int ans = 0;
  for (int pattern = 0; pattern < (1 << N); pattern++) { // 1 << Nで2のN乗に等しい
    int switch_status = 0;
    for (int i = 0; i < N; i++) {
      if (pattern >> i & 1) {
        switch_status ^= switches[i];  // ^はビット演算のXOR i番目のスイッチをonにした時のスイッチ全体の状態
      }
    }
    if (switch_status == remainder) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
