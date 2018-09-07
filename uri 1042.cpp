#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int p[1000];
    int i,j ,n,q;

    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
        p[i]=a[i];
    }
    sort(p,p+3);
    for(i=0;i<3;i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<endl;
    for(i=0;i<3;i++)
    {

        cout<<a[i]<<endl;
    }

    return 0;
}
