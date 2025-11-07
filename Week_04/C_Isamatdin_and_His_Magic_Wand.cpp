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
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    vector<int> even, odd;
    for (int i = 0; i < n; i++)
    {
      if (a[i] % 2 == 0)
      {
        even.push_back(a[i]);
      }
      else
      {
        odd.push_back(a[i]);
      }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    vector<int> ans;
    int ei = 0, oj = 0;
    for (int x : a)
    {
      if (x % 2 == 0)
      {
        ans.push_back(even[ei]);
        ei++;
      }
      else
      {
        ans.push_back(odd[oj]);
        oj++;
      }
    }

    for (int x : ans)
    {

      cout << x << " ";
    }
    cout << "\n";
  }

  return 0;
}
