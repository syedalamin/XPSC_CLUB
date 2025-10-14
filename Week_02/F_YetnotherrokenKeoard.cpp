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
    map<int, string> upper;
    map<int, string> lower;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] >= 'A' && s[i] <= 'Z')
      {
        if (s[i] == 'B')
        {
          if (!upper.empty())
          {
            auto it = upper.end();
            it--;
            upper.erase(it);
          }
        }
        else
        {
          upper[i] = s[i];
        }
      }
      else if (s[i] >= 'a' && s[i] <= 'z')
      {
        if (s[i] == 'b')
        {
          if (!lower.empty())
          {
            auto it = lower.end();
            it--;
            lower.erase(it);
          }
        }
        else
        {
          lower[i] = s[i];
        }
      }
    }

    map<int, string> mp;

    for (auto [x, y] : upper)
    {

      mp[x] = y;
    }

    for (auto [x, y] : lower)
    {

      mp[x] = y;
    }

    for (auto ans : mp)
    {
      cout << ans.second;
    }
    cout << "\n";
  }

  return 0;
}
