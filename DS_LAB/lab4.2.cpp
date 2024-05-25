#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, val;
  cin >> n >> val;
  vector<int> a(n);
  for (int i=0; i<n; i++)
    {
      cin >> a[i];
    }
  int l=0, r= n-1;
  int found = false;
  while (l<=r)
    {
      int mid = (l+r)/2;
      if (a[mid] == val)
      {
        found = true;
        break;
      }
      else if (a[mid] < val)
        l = mid+1;
      else 
        r = mid-1;
    }
  if (found)
    cout << "Available" << endl;
  else
    cout << "Not Available" << endl;
  return 0;
}