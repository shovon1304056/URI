#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c=0,d=0,e,f;
    int n,i;
    while (scanf("%d",&n)!=EOF){
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        c=c+(a*b);
        d=d+b;

    }
    e=d*100;
    f=c/e;
    printf("%.4lf\n",f);
    c=0;
    d=0;
    }
    return 0;
}
