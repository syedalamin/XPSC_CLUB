#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int c_no = 1;
  set<pair<int, int>> s;
  multiset<pair<int, int>> ml;
  vector<int> ans;
  for (int i = 1; i <= n; i++)
  {
    int t;
    cin >> t;

    if (t == 1)
    {
      int m;
      cin >> m;
      s.insert({c_no, m});
      ml.insert({m, -c_no});
      c_no++;
    }
    else if (t == 2)
    {
      int pos = s.begin()->first, mone = s.begin()->second;

      ans.push_back(pos);
      s.erase(s.begin());
      ml.erase({mone, -pos});
    }
    else
    {
      int pos = -ml.rbegin()->second, mone = ml.rbegin()->first;
      ans.push_back(pos);
      ml.erase(--ml.end());
      s.erase({pos, mone});
    }
  }

  for (auto val : ans)
  {
    cout << val << " ";
  }
  cout << "\n";

  return 0;
}
