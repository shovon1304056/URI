#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt=0,x,b,c;
    int a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    j=cnt+2;
    if(j>n)
    {
        cout<<"0"<<endl;
    }
    else{
            cout<<j<<endl;
    }
    return 0;
}
