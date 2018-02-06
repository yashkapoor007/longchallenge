#include <iostream>
#include <cstring>
using namespace std;
int printlovely(string s)
{
  int l=s.length();
  if(l<4)
  return 0;
  int co=0;int c=0,h=0,e=0,f=0;
  for(int i=0;i<=l-4;i++)
  {
    int j=i;
    while(j<i+4)
    {
      if(s[j]=='c')
    {c++;j++;}
    else if(s[j]=='h')
    {h++;j++;}
    else if(s[j]=='e')
    {e++;j++;}
    else if(s[j]=='f')
    {f++;j++;}
    else
    break;
  }
  if(c==1&&h==1&&e==1&&f==1)
  co++;
  c=0;h=0;e=0;f=0;
  }
  return co;
}
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    string s;
    cin>>s;
    // cout<<s[1]<<endl;
    int lovely=printlovely(s);
    if(lovely)
    cout<<"lovely "<<lovely<<endl;
    else
    cout<<"normal"<<endl;
  }
}
