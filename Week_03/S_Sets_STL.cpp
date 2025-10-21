#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  set<int> s;

  while (n--)
  {
    int t, x;
    cin >> t >> x;

    if (t == 1)
    {
      s.insert(x);
    }
    else if (t == 2)
    {
      s.erase(x);
    }
    else if (t == 3)
    {
      if (s.find(x) != s.end())
        cout << "Yes" << "\n";
      else
        cout << "No" << "\n";
    }
  }

  return 0;
}
