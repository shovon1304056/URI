#include<bits/stdc++.h>
using namespace std;

int winner(int n,int k)
{
   int w=0;
    for(int i=2;i<=n;i++)
    {
        w=(w+k)%i;
    }
    return w;
}

int main()
{
    int a,b,c,j;
    cin>>c;
    for(j=1;j<=c;j++)
    {
        cin>>a>>b;
        printf("Case %d: %d\n",j,winner(a,b)+1);


    }
    return 0;
}
