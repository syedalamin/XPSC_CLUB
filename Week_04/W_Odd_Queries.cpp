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
    int n, q;
    cin >> n >> q;

    vector<long long> a(n + 1);
    vector<long long> pref(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
      pref[i] = pref[i - 1] + a[i];
    }

    long long total_sum = pref[n];

    while (q--)
    {

      int l, r;
      long long k;
      cin >> l >> r >> k;

      long long sum_range = pref[r] - pref[l - 1];
      long long count = r - l + 1;
      long long new_sum = total_sum - sum_range + count * k;

      if (new_sum % 2 == 1)
      {
        cout << "YES" << "\n";
      }
      else
      {
        cout << "NO" << "\n";
      }
    }
  }

  return 0;
}
