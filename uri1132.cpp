#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n=0,i;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(i%13!=0)
        {
            n=n+i;
        }
    }
    cout<<n<<endl;
    return 0;
}
