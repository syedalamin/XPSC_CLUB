  #include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a;
    vector<int> b;

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      a.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
      int x;
      cin >> x;
      b.push_back(x);
    }

    vector<int> c;
    int l = 0, r = 0;

    while (l < n && r < m)
    {
      if (a[l] <= b[r])
      {
        c.push_back(a[l]);
        l++;
      }
      else if (a[l] >= b[r])
      {
        c.push_back(b[r]);
        r++;
      }
      else
      {
        break;
      }
    }

    while (l < n)
    {
      c.push_back(a[l]);
      l++;
  
    }
    while (r < m)
    {
      c.push_back(b[r]);
      r++;

    }

    for (int x : c)
    {
      cout << x << " ";
    }
    cout << "\n";

    return 0;
  }
