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
    int n;
    cin >> n;
    string a, b;

    cin >> a >> b;

    bool possible = true;

    for (int i = 0; i < n ; i++)
    {
      if (a[i] == '1' && b[i - 1] == '0' && b[i] == '0')
      {
        possible = false;
        break;
      }
    }
    if (possible)
    {
      cout << "YES" << "\n";
    }
    else
    {
      cout << "NO" << "\n";
    }
  }

  return 0;
}
