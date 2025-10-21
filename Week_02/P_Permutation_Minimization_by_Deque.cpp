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

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    deque<int> dq;

     for (int i = 0; i < n; i++)
    {
      if (arr[i] < dq.front())
      {
        dq.push_front(arr[i]);
      }
      else
      {
        dq.push_back(arr[i]);
      }
    }

    for (auto x : dq)
    {
      cout << x << " ";
    }
    cout << "\n";
  }

  return 0;
}
