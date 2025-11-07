#include <bits/stdc++.h>
using namespace std;

int search(string &pat, string &txt)
{
  map<char, int> map_path;
  map<char, int> window_map;
  int k = pat.size();
  int count = 0;

  for (int i = 0; i < k; i++)
  {
    map_path[pat[i]]++;
  }

  for (int i = 0; i < k; i++)
  {
    window_map[txt[i]]++;
  }

  if (window_map == map_path)
    count++;

  int l = 0;
  for (int r = k; r < txt.size(); r++)
  {
    window_map[txt[r]]++;
    window_map[txt[l]]--;
    if (window_map[txt[l]] == 0)
    {
      window_map.erase(txt[l]);
    }
    l++;

    if (window_map == map_path)
      count++;
  }
 
  return count;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string txt;
  string pat;
  cin >> txt;
  cin >> pat;

  int ans = search(pat, txt);
  cout << ans << "\n";

  return 0;
}
