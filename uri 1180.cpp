#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[1000],p[1000];
    int i,j,n,b,c,d,cnt;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        p[i]=a[i];
        //cout<<p[i]<<endl;
    }

    sort(a,a+n);
    cout<<"Menor valor: "<<a[0]<<endl;
    //for(i=0;i<n;i++)
    //{
        //cout<<a[i]<<endl;
    //}
    for(i=0;i<n;i++)
    {
        if(p[i]==a[0])
        {
            cnt=i;
            break;

        }

    }

cout<<"Posicao: "<<cnt<<endl;
    return 0;
}
