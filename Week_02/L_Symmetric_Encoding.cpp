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

    set<char> st(s.begin(), s.end());
    string r(st.begin(), st.end());

    map<char, char> mp;

    for (int i = 0; i < r.size(); i++)
    {
      mp[r[i]] = r[r.size() - 1 - i];
    }

    string ans = s;

    for (char &c : ans)
    {
      c = mp[c];
    }

    cout << ans << "\n";
  }

  return 0;
}
