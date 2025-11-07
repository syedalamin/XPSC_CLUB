#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x;
  cin >> n >> x;

  map<ll, ll> sum_freq;
  sum_freq[0] = 1;
  ll sum = 0;
  ll ans = 0;

  for (int i = 1; i <= n; i++)
  {
    int z;
    cin >> z;

    sum += z;
    ans += sum_freq[sum - x];
    sum_freq[sum]++;
  }

  cout << ans << "\n";

  return 0;
}
