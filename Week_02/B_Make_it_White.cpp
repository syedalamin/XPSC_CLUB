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

    int firstIdx = -1, lastIdx = -1;

    firstIdx = s.find('B');
    lastIdx = s.rfind('B');

    int ans =  lastIdx - firstIdx + 1;

    cout << ans << "\n";
  }

  return 0;
}
