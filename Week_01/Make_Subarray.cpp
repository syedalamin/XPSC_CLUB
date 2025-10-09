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
    string s;
    cin >> s;

    int cnt = 0;

    int first = -1, last = -1;

    for (int i = 0; i < n; i++)
    {

      if (s[i] == '1')
      {
        if (first == -1)
        {
          first = i;
        }
        last = i;
      }
    }
    if (first != -1)
    {
      for (int i = first; i <= last; i++)
      {

        if (s[i] == '0')
        {
          cnt++;
        }
      }
    }

    cout << cnt << "\n";
  }

  return 0;
}
