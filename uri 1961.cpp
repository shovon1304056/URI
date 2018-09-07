#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int d,cnt=0,i,j,n,m;
    cin>>m>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        d=abs(a[i-1]-a[i]);

        if(d<=m){
            cnt++;
        }
    }
    if(cnt==n-1)
        {cout<<"YOU WIN"<<endl;}

    else
        {cout<<"GAME OVER"<<endl;}

    return 0;
}
