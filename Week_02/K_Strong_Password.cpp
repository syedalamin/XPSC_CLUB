#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  while (n--)
  {
    string s;
    cin >> s;

    string word = "";
    int b_time = -1;

    for (int i = 0; i <= s.size(); i++)
    {

      for (char c = 'a'; c <= 'z'; c++)
      {
        string st_s = s;
        st_s.insert(st_s.begin() + i, c);

        int time = 2;

        for (int j = 1; j < st_s.size(); j++)
        {
          if (st_s[j] == st_s[j-1])
          {
            time += 1;
          }
          else
          {
            time += 2;
          }
        }

        if (time > b_time)
        {
          b_time = time;
          word = st_s;
        }
      }
    }

    cout << word << "\n";
  }

  return 0;
}
