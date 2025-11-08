#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int mavx = 200000;
  int n, k, q;
  cin >> n >> k >> q;
  
  vector<int> temp(mavx + 2, 0);

  for (int i = 0; i < n; i++)
  {
    int l, r;
    cin >> l >> r;

    temp[l]++;
    temp[r + 1]--;
  }
  for (int i = 1; i <= mavx; i++)
  {
    temp[i] += temp[i - 1];
  }
  for (int i = 1; i <= mavx; i++)
  {
    temp[i] = (temp[i] >= k) + temp[i - 1];
  }

  while (q--)
  {
    int a, b;
    cin >> a >> b;
    cout << temp[b] - temp[a - 1] << "\n";
  }

  return 0;
}
