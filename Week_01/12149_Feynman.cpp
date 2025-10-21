#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;

  while (cin >> n && n != 0)
  {
    long long total = 0;

    for (int i = 0; i <= n; i++)
    {
      total += (long long)i * i;
    }

    cout << total << "\n";
  }

  return 0;
}
