#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int x, y;
  cin >> x >> y;

  if (x == y)
  {
    cout << x + y << "\n";
    return 0;
  }

  int a = x + x - 1;
  int b = y + y - 1;

  int ans = max(a, b);

  cout << ans;

  return 0;
}
