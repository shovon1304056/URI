#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b[100],c[100];
    int i,n,j,k,l,pos;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
       b[i]=a[i];

    }
    sort(b,b+n);
    for(i=0;i<n;i++)
    {
        if(b[0]==a[i])
        {
            pos=i+1;
            break;
        }
    }
    cout<<pos<<endl;
    return 0;

}
