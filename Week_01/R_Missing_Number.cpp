#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long n;
  cin >> n;

  long long sum = n * (n + 1) / 2;
  long long ans = 0;
  for (long long i = 1; i < n; i++)
  {
    long long a;
    cin >> a;
    ans += a;
  }

  cout << sum - ans << "\n";

  return 0;
}
