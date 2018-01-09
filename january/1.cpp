#include<bits/stdc++.h>
using namespace std;
int rectangle(int arr[])
{
  int count[10001];
  memset(count,0,sizeof(count));
  for(int i=0;i<4;i++)
  {
    count[arr[i]]++;
  }
  for(int i=0;i<4;i++)
  {
    if(count[arr[i]]%2!=0)
    return 0;
  }
  return 1;
}
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int arr[4];
    for(int i=0;i<4;i++)
    cin>>arr[i];
    if(rectangle(arr))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  }
}
