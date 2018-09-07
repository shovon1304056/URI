#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,f,g,h,sum=0;
    int i,j,k,n;
    char name[100];
    double p[100];
    cin>>n;

    for(i=0;i<n;i++)
    {
    cin>>name;
    cin>>h;

    for(j=0;j<7;j++)
    {
        cin>>p[j];

    }
    sort(p,p+7);
    p[0]=0;
    p[6]=0;
    for(j=0;j<7;j++)
    {
        sum=sum+p[j];
    }
    e=sum*h;
    //cout<<h<<" "<<e<<endl;
    printf("%s %.2lf\n",name,e);
    sum=0;

    }
    return 0;
}
