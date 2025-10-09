#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
  if (n == 1)
    return 1;

  int mul = fact(n - 1);

  int ans = n * mul;

  return ans % 10;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    cout << fact(n) << "\n";
    
    // cout << n << "\n";
  }

  return 0;
}
