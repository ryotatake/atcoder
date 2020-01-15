#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int A[n];
  for (int i = 1; i <= n; i++) {
    A[i] = 0;
  }
  int correct_ans = 0;
  int penalty = 0;

  for (int i = 0; i < m; i++) {
    int p;
    string s;
    cin >> p >> s;
    if (A[p] == -1) {
      continue;
    }
    if (s == "WA") A[p]++;
    else {
      correct_ans++;
      penalty += A[p];
      A[p] = -1;
    }
  }

  cout << correct_ans << " " << penalty << endl;
  return 0;
}
