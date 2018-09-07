#include<bits/stdc++.h>
using namespace std;
int answer(int n,int p)
{
    int r=0;
    for(int i=1;i<n;i++)
    {
        r=(r+p)%i;
    }
    return r;
}
int main()
{
    int a,b,c,j,k,n,m;
    while(1)
    {
        cin>>n;
        m=1;
        if(n==0)
            break;
        for(;;)
        {
            if(answer(n,m)!=11)
            {
                m++;
            }
            else
                break;
        }
        cout<<m<<endl;
    }
    return 0;
}
