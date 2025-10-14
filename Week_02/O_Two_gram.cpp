#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  string s;
  cin >> s;

  map<string, int> mp;

  for (int i = 0; i < n -1; i++)
  {
    string sub = s.substr(i, 2);

    mp[sub] += 1;
  }

  int mx = -1;
  string ans = "";
  for (auto [x, y] : mp)
  {
    if (mx < y)
    {
      mx = y;
      ans = x;
    }
 
  }

  cout << ans << "\n";

  return 0;
}
