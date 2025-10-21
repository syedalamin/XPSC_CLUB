#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  map<pair<int, int>, string> mp;

  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    mp[{a, b}] = s;
  }

  int t;
  cin >> t;

  while (t--)
  {
    int x, y;
    cin >> x >> y;

    cout << mp[{x, y}] << "\n";
  }



  return 0;
}
