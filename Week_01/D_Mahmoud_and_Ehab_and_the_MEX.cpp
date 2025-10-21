#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x;
  cin >> n >> x;

  bool pre[101] = {false};

  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    pre[num] = true;
  }

  int cnt = 0;

  for (int i = 0; i < x; i++)
  {
    if (pre[i] == false)
      cnt++;
  }

  if (pre[x])
    cnt++;

  cout << cnt << "\n";

  return 0;
}
