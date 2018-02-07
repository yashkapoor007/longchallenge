#include <iostream>
#include <cmath>
using namespace std;
void printpatent(int n,int m,int x,int k,string s)
{
    int ew=0,ow=0;
    for(int i=0;i<k;i++)
    {
        if(s[i]=='O')
        ow++;
        else
        ew++;
    }
    int tew=0,tow=0;
        for(int i=1;i<=m;i++)
        {
            if(i%2==0)
            {
                if(ew>0)
                {tew+=min(ew,x);
                ew-=min(ew,x);}
            }
            else
            {
                if(ow>0)
                {
                    tow+=min(ow,x);
                    ow-=min(ow,x);
                }
            }
        }
    if(n<=(tew+tow))
    cout<<"yes";
    else
    cout<<"no";
}
int main() {

    int T;
    cin>>T;
    while(T--)
    {
        int n,m,x,k;
        cin>>n>>m>>x>>k;
        string s;
        cin>>s;
        printpatent(n,m,x,k,s);
        cout<<endl;
    }
    return 0;
}
