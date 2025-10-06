#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<double> q(n), y(n);

  for (int i = 0; i < n; i++)
  {
    cin >> q[i] >> y[i];
  }

  double ans = 0.0;

  for (int i = 0; i < n; i++)
  {

    ans += q[i] * y[i];
  }

  cout << fixed << setprecision(3) << ans << "\n";

  return 0;
}
