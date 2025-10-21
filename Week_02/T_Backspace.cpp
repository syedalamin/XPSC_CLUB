#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  string ans;

  for (auto c : s)
  {
    if (c == '<')
    {
      if (!ans.empty())
      {
        ans.pop_back();
      }
    }
    else
    {
      ans.push_back(c);
    }
  }

  cout << ans << "\n";

  return 0;
}
