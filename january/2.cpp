#include <bits/stdc++.h>
using namespace std;
long long int maximum(vector<int>arr[],int n)
{
  for(int k=0;k<n;k++)
{
  sort(arr[k].begin(),arr[k].end(),greater<int>());
}long long int max=0,ele=INT_MAX;
int i;
for(i=n-1;i>=0;i--)
{
  int j;
  for(j=0;j<n;j++)
  {
    if(ele>arr[i][j])
    {
      max+=arr[i][j];
      ele=arr[i][j];
      break;
    }
  }
  if(j==n)
  return -1;
}
return max;
}
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int n;
    cin>>n;
    vector<int> arr[n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        int c;
        cin>>c;
        arr[i].push_back(c);
      }
    }
    cout<<maximum(arr,n)<<endl;
  }
}
