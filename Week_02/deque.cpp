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
    // dq.push_back(x);
    dq.push_front(x);
  }
  dq.pop_front();
  dq.push_front(2);

  for (auto val : dq)
  {
    cout << val << " ";
  }

  return 0;
}
