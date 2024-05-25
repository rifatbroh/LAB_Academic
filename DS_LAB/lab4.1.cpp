
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, val;
  cin >> n >> val;
  bool found = false;
  vector<int> a(n);
  for (int i=0; i<n; i++)
    {
      cin >> a[i];
    }
  for (int i=0; i<n; i++)
    {
      if (a[i] == val)
      {
        found = true;
        break;
      }
    }
  if (found)
    cout << "Available" << endl;
  else
    cout << "Not Available" << endl;
  return 0;
}