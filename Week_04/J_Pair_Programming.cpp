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
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
      cin >> b[i];
    }

    int i = 0;
    int j = 0;

    int line = k;
    vector<int> ans;
    bool posible = true;

    while (i < n || j < m)
    {
      if (i < n && a[i] == 0)
      {
        ans.push_back(0);
        line++;
        i++;
      }
      else if (j < m && b[j] == 0)
      {
        ans.push_back(0);
        line++;
        j++;
      }
      else if (i < n && a[i] > 0 && a[i] <= line)
      {
        ans.push_back(a[i]);
        i++;
      }
      else if (j < m && b[j] > 0 && b[j] <= line)
      {
        ans.push_back(b[j]);
        j++;
      }
      else
      {
        posible = false;
        break;
      }
    }

    if (!posible)
    {
      cout << -1 << "\n";
    }
    else
    {
      for (auto x : ans)
      {
        cout << x << " ";
      }
      cout << "\n";
    }
  }

  return 0;
}
