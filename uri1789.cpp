#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int b,c,d,n,i,j,k;
    while(scanf("%d",&n)!=EOF){

    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sort(a,a+n);
    if(a[n-1]<10)
    {
        cout<<"1"<<endl;
    }
    else if(a[n-1]>=10 && a[n-1]<20)
    {
        cout<<"2"<<endl;
    }
    else{
        cout<<"3"<<endl;
    }
    }
    return 0;

}
