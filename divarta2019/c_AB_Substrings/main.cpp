#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  int first_b = 0;
  int last_a = 0;
  int first_b_and_last_a = 0;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int pos = s.find("AB");
    while (pos != std::string::npos) {
      ans++;
      pos = s.find("AB", pos + 1);
    }
    if (s.front() == 'B' && s.back() == 'A') first_b_and_last_a++;
    else if (s.front() == 'B') first_b++;
    else if (s.back() == 'A') last_a++;
  }
  if (first_b == 0 && last_a == 0) ans += max(0, first_b_and_last_a - 1);
  else ans += (first_b_and_last_a + min(first_b, last_a));
  cout << ans << endl;
  return 0;
}
