#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  deque<int> dq;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    dq.push_back(x);
  }

  int s = 0, d = 0, who = 0;

  while (!dq.empty())
  {
    int left = dq.front(), right = dq.back(), mx;
    mx = max(left, right);

    if (who % 2 == 0)
    {
      s += mx;
    }
    else
    {
      d += mx;
    }

    if (mx == left)
    {
      dq.pop_front();
    }
    else
    {
      dq.pop_back();
    }
    who++;
  }

  cout << s << " " << d << "\n";

  return 0;
}
