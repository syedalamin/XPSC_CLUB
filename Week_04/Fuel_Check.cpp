#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int x, y;
  cin >> x >> y;

  long long ans = (x * y);

  if (ans >= 100)
  {
    cout << "Yes" << "\n";
  }
  else
  {

    cout << "No" << "\n";
  }

  return 0;
}
