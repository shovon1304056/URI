#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a=0,b,n,i;
   while(scanf("%lld",&n)==1)
{
    if(n==0)
    break;
    else
    {a=0;
        for(i=1;i<=n;i++)
         a=a+i*i;
        }
        cout<<a<<endl;
}

return 0;
}
