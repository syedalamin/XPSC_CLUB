#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  while (n--)
  {
    int l = 0, r = 0, d = 0, u = 0;
    cin >> l >> r >> d >> u;

    if (l == r && d == u)
    {
      if (l + r == d + u)
      {
        cout << "Yes" << "\n";
      }
      else
      {

        cout << "No" << "\n";
      }
    }
    else
    {

      cout << "No" << "\n";
    }
  }

  return 0;
}
