#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> blue(n);
  for (int i = 0; i < n; i++) {
    cin >> blue[i];
  }
  int m;
  cin >> m;
  vector<string> red(m);
  for (int i = 0; i < m; i++) {
    cin >> red[i];
  }
  int max_ans = 0;
  for (int i = 0; i < n; i++) {
    string str = blue[i];
    int ans = 0;
    for (int j = 0; j < n; j++) {
      if (str == blue[j]) ans++;
    }
    for (int j = 0; j < m; j++) {
      if (str == red[j]) ans--;
    }
    max_ans = max(max_ans, ans);
  }
  cout << max_ans << endl;
  return 0;
}
