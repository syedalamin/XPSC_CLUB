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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    bool negative = false;
    long long int operations = 0;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
      sum += abs(a[i]);
      if (a[i] < 0)
      {
        if (negative == false)
        {
          operations++;
          negative = true;
        }
      }
      if (a[i] > 0)
      {
        negative = false;
      }
    }

    cout << sum << " " << operations << "\n";
  }

  return 0;
}
