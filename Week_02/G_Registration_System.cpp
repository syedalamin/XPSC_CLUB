#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  map<string, int> mp;

  while (n--)
  {
    string s;
    cin >> s;

    if (mp.find(s) == mp.end())
    {
      cout << "OK\n";
      mp[s] = 0;
    }
    else
    {
      mp[s]++;
      cout << s << mp[s] << "\n";
    }
   }

  return 0;
}
