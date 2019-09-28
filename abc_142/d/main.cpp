#include <bits/stdc++.h>

using namespace std;

long long int gcd(long long int a, long long int b)
{
  if (a%b==0)
  {
    return(b);
  } else {
    return(gcd(b,a%b));
  }
}

vector<long long int> divisor(long long int n) {
  vector<long long int> ret;
  for(long long int i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      ret.push_back(i);
      if(i * i != n) ret.push_back(n / i);
    }
  }
  return (ret);
}

bool IsPrime(long long int num)
{
  if (num < 2) return false;
  else if (num == 2) return true;
  else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

  double sqrtNum = sqrt(num);
  for (long long int i = 3; i <= sqrtNum; i += 2)
  {
    if (num % i == 0)
    {
        // 素数ではない
        return false;
    }
  }

  // 素数である
  return true;
}

int main() {
  int ans = 0;
  long long int A, B;
  cin >> A >> B;

  long long int _gcd = gcd(A, B);
  vector<long long int> divisors = divisor(_gcd);

  for (long long int i = 0; i < (long long int)divisors.size(); i++) {
    if (IsPrime(divisors[i])) ans++;
  }
  ans++; // 1は必ず含まれる。

  cout << ans << endl;
  return 0;
}
