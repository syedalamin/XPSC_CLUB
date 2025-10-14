#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  map<int, int> mp;
  mp[12] = 30;
  mp[10] = 20;
  mp[2] = 23;
  // mp.insert({10, 20});
  // mp.insert({12, 60});

  // cout << mp[12] << "\n";

  for (auto it : mp)
  {
    cout << it.first << " -> " << it.second << "\n";
  }

  auto it = mp.find(10);

  if (it == mp.end())
  {
    cout << "value not found" << "\n";
  }
  else
  { 

    cout << it->first << " " << it->second << "\n";
    mp.erase(it->first);

  }
  // for (auto [key, value] : mp)
  // {
  //   cout << key << " -> " << value << "\n";
  // }

  return 0;
}
