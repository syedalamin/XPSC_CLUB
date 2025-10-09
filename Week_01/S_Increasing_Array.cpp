#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<long long> arr(n);
  long long cnt = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 1; i < n; i++)
  {
    if (arr[i] < arr[i - 1])
    {
      long long inc = arr[i - 1] - arr[i];
      cnt += inc;

      arr[i] = arr[i - 1];
    }
  }
  cout << cnt << "\n";

  return 0;
}
