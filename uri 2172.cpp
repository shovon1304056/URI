#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,cnt=0,x,b,c;
    //int a[100];
    while(scanf("%lld %lld",&i,&j))
    {
        if(i==0 && j==0)
        {
            break;
        }
        else
        {
            n=i*j;
            cout<<n<<endl;
        }
    }

    return 0;
}
