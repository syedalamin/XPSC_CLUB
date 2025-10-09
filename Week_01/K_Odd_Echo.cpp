#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<string> v;

  for (int i = 0; i <= n; i++)
  {
    string s;
    cin >> s;

    if (i % 2 == 0)
    {
      v.push_back(s);
    }
  }

  for (auto s : v)
  {
    cout << s << "\n";
  }

  return 0;
}
