#include <bits/stdc++.h>

using namespace std;

int n, a, b, c;
int l[8];
int inf = pow(10, 9);

// DFS: deps-first search 深さ優先探索を使う
int dfs(int now,int la,int lb,int lc) {
  if (now==n) {
    if (min({la,lb,lc})>0) return abs(la-a)+abs(lb-b)+abs(lc-c)-30; // 一回目は結合しないので、10*3を引く
    else return inf;
  }
  int m0=dfs(now+1,la,lb,lc);
  int ma=dfs(now+1,la+l[now],lb,lc)+10;
  int mb=dfs(now+1,la,lb+l[now],lc)+10;
  int mc=dfs(now+1,la,lb,lc+l[now])+10;
  return min({m0,ma,mb,mc});
}

int main() {
  cin >> n >> a >> b >> c;
  for (int i=0;i<n;i++) {
    cin >> l[i];
  }
  cout << dfs(0,0,0,0) << endl;
  return 0;
}
