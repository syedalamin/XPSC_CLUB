#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  // int n;
  // cin >> n;
  // vector<int> v;
  // for (int i = 0; i < n; i++)
  // {
  //   int x;
  //   cin >> x;

  //   v.push_back(x);

  //   // cout << v[i] << " ";
  // }
  // v.pop_back();
  // for (int i = 0; i < v.size(); i++)
  // {

  //   cout << v[i] << " ";
  // }
  // cout << "\n";

  // cout << v.front() << "\n";
  // cout << v.back() << "\n";
  // v.clear();
  // cout << v.empty() << "\n";

  // int n;
  // cin >> n;

  // vector<int> v(n);

  // for (int i = 0; i < n; i++)
  // {
  //   cout << v[i] << " ";
  // }
  // cout << "\n";
  // v.assign(n, 5);
  // for (int i = 0; i < n; i++)
  // {
  //   cout << v[i] << " ";
  // }

  // vector<int> v;
  // v.resize(4);
  // v.assign(4, v.size());
  // for (int i = 0; i < v.size(); i++)
  // {
  //   cout << v[i] << " ";
  // }

  int n;
  cin >> n;

  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v.push_back(x);
  }

  // reverse(v.begin(), v.end());
  // sort(v.begin(), v.end(), greater<int>());
  // sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << "\n";
  
  auto mn = min_element(v.begin(), v.end());
  auto mx = max_element(v.begin(), v.end());
  cout << *mn << "\n";
  cout << *mx << "\n";

  
  // auto it = v.begin();

  // for (auto it = v.begin(); it != v.end(); it++)
  // {
  //   cout << *it << "\n";
  // }

  return 0;
}
