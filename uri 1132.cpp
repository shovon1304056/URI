#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,sum=0;
    cin>>a>>b;
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    for(i=a;i<=b;i++)
    {

        if(i%13!=0)
        {
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
