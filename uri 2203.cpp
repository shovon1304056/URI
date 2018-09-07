#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,v,r1,r2,n,p,q,a,b,c,d;
    while(scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2)!= EOF)
    {
        cin>>v>>r1>>r2;
        a=(x2-x1)*(x2-x1);
        b=(y2-y1)*(y2-y1);
        c=sqrt(a+b);
        c += v*1.50;
        p=r1+r2;

        if(c>p)
            cout<<"N"<<endl;
        else
            cout<<"Y"<<endl;

    }
    return 0;
    }


