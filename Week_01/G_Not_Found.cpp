#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin >> s;

  vector<bool> letter(26, false);

  for (auto c : s)
  {

    letter[c - 'a'] = true;
  }

  for (int i = 0; i < 26; i++)
  {

    if (!letter[i])
    {

      cout << (char)('a' + i) << "\n";
      return 0;
    }
  }

  cout << "None" << "\n";
  return 0;
}
