#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,sum=0,i,j;
    while(scanf("%d %d",&a,&b)){
    if((a>0 && b<=0) ||(a<=0 && b>0) ||(a>=0 && b<=0))
    {
        break;
    }
    else{
    if(a>b)
    {
        c=b;
        b=a;
        a=c;
        //cout<<a<<b<<endl;

    }
    for(i=a;i<=b;i++)
    {
        sum=sum+i;
        cout<<i<<" ";

    }
    cout<<"Sum="<<sum<<endl;

    }
sum=0;
    }

    return 0;
}
