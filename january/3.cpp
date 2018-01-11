#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli max(lli a,lli b)
{
  return a>b?a:b;
}
lli max(lli a,lli b,lli c)
{
  return max(max(a,b),c);
}
lli maxcrossingsum(int arr[],int l,int m,int h)
{
  lli sum=0,left_sum=INT_MIN;
  for(int i=m;i>=l;i--)
  {
    sum+=arr[i];
    if(sum>left_sum)
    left_sum=sum;
  }
  sum=0;
  lli right_sum=INT_MIN;
  for(int i=m+1;i<=h;i++)
  {
    sum+=arr[i];
    if(sum>right_sum)
    right_sum=sum;
  }
  return left_sum+right_sum;
}
lli maxsubarray(int arr[],lli l,lli h)
{
  if(l==h)
  return arr[l];
  int m=(l+h)/2;
  return max(maxsubarray(arr, l, m),
              maxsubarray(arr, m+1, h),
              maxcrossingsum(arr, l, m, h));
}
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    lli sum=0;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      sum+=arr[i];
    }
    lli max_sum=maxsubarray(arr,0,n-1);
    lli ans=0;
    lli left_sum=INT_MIN;
    lli ts=0;
    for(int i=0;i<n;i++)
    {
      ts+=arr[i];
      if(left_sum<ts)
      left_sum=ts;
    }
    ts=0;
    lli right_sum=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
      ts+=arr[i];
      if(right_sum<ts)
      {
        right_sum=ts;
      }
    }
    if(k>=2)
    {
      ans=max(max_sum,left_sum+right_sum+(k-2)*sum,left_sum+right_sum);
    }
    else
    {
      ans=max_sum;
    }
    cout<<ans<<endl;
  }
}
