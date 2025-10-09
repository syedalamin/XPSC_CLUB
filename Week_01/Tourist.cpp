#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n, a, b;
    cin >> n >> a >> b;

    int minDist = INT_MAX;
    ;

    while (n--)
    {
      int x, y;
      cin >> x >> y;

      int dist = abs(x - a) + abs(y - b);

      if (minDist > dist)
      {
        minDist = dist;
      }
    }

    cout << minDist << "\n";
  }

  return 0;
}
