#include <bits/stdc++.h>

using namespace std;


int main()
{
  int N; cin >> N;
  int S[N + 1][3];

  int a, b, c; cin >> a >> b >> c;

  S[1][0] = a;
  S[1][1] = b;
  S[1][2] = c;

  for (int i = 1; i < N; i++) {
    int a, b, c; cin >> a >> b >> c;
    S[i + 1][0] = max(S[i][1], S[i][2]) + a;
    S[i + 1][1] = max(S[i][0], S[i][2]) + b;
    S[i + 1][2] = max(S[i][0], S[i][1]) + c;
  }

  cout << max({S[N][0], S[N][1], S[N][2]}) << endl;

  return 0;
}
