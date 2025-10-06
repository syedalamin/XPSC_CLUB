#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  string ans = "";
  for (char c : s)
  {
    if (c >= 'A' && c <= 'Z')
    {
      ans += c;
    }
  }

  cout << ans << "";

  return 0;
}
