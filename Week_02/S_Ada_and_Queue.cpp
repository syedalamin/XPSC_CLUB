#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  deque<int> dq;
  bool reverse = false;
  while (t--)
  {
    string cmd;
    cin >> cmd;

    if (cmd == "push_back")
    {
      int n;
      cin >> n;
      if (!reverse)
      {
        dq.push_back(n);
      }
      else
      {
        dq.push_front(n);
      }
    }
    else if (cmd == "toFront")
    {
      int n;
      cin >> n;

      if (!reverse)
      {
        dq.push_front(n);
      }
      else
      {
        dq.push_back(n);
      }
    }
    else if (cmd == "front")
    {
      if (dq.empty())
      {
        cout << "No job for Ada?" << "\n";
      }
      else
      {
        if (!reverse)
        {
          cout << dq.front() << "\n";
          dq.pop_front();
        }
        else
        {
          cout << dq.back() << "\n";
          dq.pop_back();
        }
      }
    }
    else if (cmd == "back")
    {
      if (dq.empty())
      {
        cout << "No job for Ada?" << "\n";
      }
      else
      {
        if (!reverse)
        {
          cout << dq.back() << "\n";
          dq.pop_back();
        }
        else
        {

          cout << dq.front() << "\n";
          dq.pop_front();
        }
      }
    }
    else if (cmd == "reverse")
    {
      reverse = !reverse;
    }
  }

  return 0;
}
