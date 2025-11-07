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

    int wolf_left = 0;
    int safe_bird = 0;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == '1')
      {
        wolf_left = 1;
      }
      else if (s[i] == '0' && wolf_left == 0)
      {
        safe_bird++;
      }
    }
    cout << safe_bird << "\n";
  }

  return 0;
}
