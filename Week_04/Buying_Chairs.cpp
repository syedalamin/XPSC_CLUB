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
    int w, p, k;
    cin >> w >> p >> k;

    int wood_to_buy = min(w, k);
    int remaining = k - wood_to_buy;
    int plastic_to_buy = min(p, remaining);

    long long ans = (1LL * (wood_to_buy * 2) + 1LL * (plastic_to_buy * 1));

    cout << ans << "\n";
  }

  return 0;
}
