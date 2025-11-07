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
    int n, k;
    string s;
    cin >> n >> k >> s;
    int ans = k;
    int currB = 0;
    int l = 0, r = 0;

    while (r < k && r < n)
    {
      if (s[r] == 'B')
      {
        currB++;
      }
      r++;
    }

    if (r == k)
      ans = min(ans, k - currB);

    while (r < n)
    {
      if (s[l] == 'B')
      {
        currB--;
      }
      l++;
      if (s[r] == 'B')
      {
        currB++;
      }
      r++;
      ans = min(ans, k - currB);
    }
    cout << ans << "\n";
  }

  return 0;
}
