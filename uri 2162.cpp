#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int b,c,d,e,f,i,n,cnt1=0,cnt2=0,cnt3=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]<a[1])
    {
        for(i=0;i<n-1;i++)
        {
            if(i%2==0)
            {if(a[i]>a[i+1])
            {
                cnt1++;
            }}
            else
            {
                cnt2++;
            }

        }
    }


    else if(a[0]>a[1]){
        for(i=0;i<n-1;i++)
        {
             if(i%2==0)
            {if(a[i]<a[i+1])
            {
                cnt1++;
            }}
            else
            {
                cnt2++;
            }

        }
    }
    if(cnt1+cnt2+1==n)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
