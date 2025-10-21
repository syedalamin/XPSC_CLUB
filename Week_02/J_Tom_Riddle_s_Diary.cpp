#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  map<string, bool> mp;
  for (int i = 0; i < n; i++)
  {
    string x;
    cin >> x;

    if (mp[x])
    {
      cout << "YES" << "\n";
    }
    else
    {
      cout << "NO" << "\n";
      mp[x] = true;
    }
  }

   return 0;
}
