#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, p;
  cin >> n >> p;

  cin.ignore();

  int cnt = 0;

  for (int i = 0; i < n; i++)
  {
    string s;
    getline(cin, s);

    for (char &c : s)
    {
      c = tolower(c);
    }

    stringstream ss(s);

    string word;

    while (ss >> word)
    {
      if (word == "problem")
      {
        cnt++;
      }
    }
  }

  int ans = p + cnt;

  cout << ans << "\n";

  return 0;
}
