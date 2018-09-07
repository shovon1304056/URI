#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,n,i,j;
    while(scanf("%lld",&n)!=EOF)
    {
        while(n)
        {
            a=n%10;
            n=n/10;
            cout<<a;
        }
cout<<endl;
    }
    return 0;
}
