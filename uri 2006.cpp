#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int n,i,j,k,d,e,cnt=0;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=5;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=5;i++)
        {
            if(a[i]==n)
                cnt++;
        }
        cout<<cnt<<endl;
        cnt =0;
    }


    return 0;
}
